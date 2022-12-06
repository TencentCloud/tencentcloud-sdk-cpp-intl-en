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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_STATISTICSITEM_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_STATISTICSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * Usage data unit
                */
                class StatisticsItem : public AbstractModel
                {
                public:
                    StatisticsItem();
                    ~StatisticsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Date in the format of yyyy-mm-dd, such as 2018-07-13
                     * @return StatDate Date in the format of yyyy-mm-dd, such as 2018-07-13
                     */
                    std::string GetStatDate() const;

                    /**
                     * 设置Date in the format of yyyy-mm-dd, such as 2018-07-13
                     * @param StatDate Date in the format of yyyy-mm-dd, such as 2018-07-13
                     */
                    void SetStatDate(const std::string& _statDate);

                    /**
                     * 判断参数 StatDate 是否已赋值
                     * @return StatDate 是否已赋值
                     */
                    bool StatDateHasBeenSet() const;

                    /**
                     * 获取Statistical value
                     * @return Data Statistical value
                     */
                    uint64_t GetData() const;

                    /**
                     * 设置Statistical value
                     * @param Data Statistical value
                     */
                    void SetData(const uint64_t& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Date in the format of yyyy-mm-dd, such as 2018-07-13
                     */
                    std::string m_statDate;
                    bool m_statDateHasBeenSet;

                    /**
                     * Statistical value
                     */
                    uint64_t m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_STATISTICSITEM_H_
