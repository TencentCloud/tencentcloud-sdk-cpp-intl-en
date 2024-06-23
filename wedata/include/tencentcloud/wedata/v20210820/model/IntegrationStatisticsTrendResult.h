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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONSTATISTICSTRENDRESULT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONSTATISTICSTRENDRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DataInLong Dashboard trend chart statistical results
                */
                class IntegrationStatisticsTrendResult : public AbstractModel
                {
                public:
                    IntegrationStatisticsTrendResult();
                    ~IntegrationStatisticsTrendResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Statistical Attribute Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StatisticName Statistical Attribute Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetStatisticName() const;

                    /**
                     * 设置Statistical Attribute Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _statisticName Statistical Attribute Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatisticName(const std::vector<std::string>& _statisticName);

                    /**
                     * 判断参数 StatisticName 是否已赋值
                     * @return StatisticName 是否已赋值
                     * 
                     */
                    bool StatisticNameHasBeenSet() const;

                    /**
                     * 获取Statistical Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StatisticValue Statistical Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetStatisticValue() const;

                    /**
                     * 设置Statistical Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _statisticValue Statistical Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatisticValue(const std::vector<int64_t>& _statisticValue);

                    /**
                     * 判断参数 StatisticValue 是否已赋值
                     * @return StatisticValue 是否已赋值
                     * 
                     */
                    bool StatisticValueHasBeenSet() const;

                    /**
                     * 获取Statistical Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StatisticType Statistical Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatisticType() const;

                    /**
                     * 设置Statistical Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _statisticType Statistical Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatisticType(const std::string& _statisticType);

                    /**
                     * 判断参数 StatisticType 是否已赋值
                     * @return StatisticType 是否已赋值
                     * 
                     */
                    bool StatisticTypeHasBeenSet() const;

                private:

                    /**
                     * Statistical Attribute Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_statisticName;
                    bool m_statisticNameHasBeenSet;

                    /**
                     * Statistical Value
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_statisticValue;
                    bool m_statisticValueHasBeenSet;

                    /**
                     * Statistical Item
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_statisticType;
                    bool m_statisticTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONSTATISTICSTRENDRESULT_H_
