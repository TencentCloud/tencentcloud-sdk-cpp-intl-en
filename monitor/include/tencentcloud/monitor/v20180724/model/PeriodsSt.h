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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PERIODSST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PERIODSST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Statistical method during the period
                */
                class PeriodsSt : public AbstractModel
                {
                public:
                    PeriodsSt();
                    ~PeriodsSt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Period
                     * @return Period Period
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置Period
                     * @param _period Period
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Statistical method
                     * @return StatType Statistical method
                     * 
                     */
                    std::vector<std::string> GetStatType() const;

                    /**
                     * 设置Statistical method
                     * @param _statType Statistical method
                     * 
                     */
                    void SetStatType(const std::vector<std::string>& _statType);

                    /**
                     * 判断参数 StatType 是否已赋值
                     * @return StatType 是否已赋值
                     * 
                     */
                    bool StatTypeHasBeenSet() const;

                private:

                    /**
                     * Period
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Statistical method
                     */
                    std::vector<std::string> m_statType;
                    bool m_statTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PERIODSST_H_
