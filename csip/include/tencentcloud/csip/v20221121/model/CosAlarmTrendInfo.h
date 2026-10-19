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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSALARMTRENDINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSALARMTRENDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosRiskInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos daily alerts/risk information
                */
                class CosAlarmTrendInfo : public AbstractModel
                {
                public:
                    CosAlarmTrendInfo();
                    ~CosAlarmTrendInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Current date in string format
                     * @return CurrentDateStr Current date in string format
                     * 
                     */
                    std::string GetCurrentDateStr() const;

                    /**
                     * 设置Current date in string format
                     * @param _currentDateStr Current date in string format
                     * 
                     */
                    void SetCurrentDateStr(const std::string& _currentDateStr);

                    /**
                     * 判断参数 CurrentDateStr 是否已赋值
                     * @return CurrentDateStr 是否已赋值
                     * 
                     */
                    bool CurrentDateStrHasBeenSet() const;

                    /**
                     * 获取Total count for the current date
                     * @return CurrentDayCount Total count for the current date
                     * 
                     */
                    int64_t GetCurrentDayCount() const;

                    /**
                     * 设置Total count for the current date
                     * @param _currentDayCount Total count for the current date
                     * 
                     */
                    void SetCurrentDayCount(const int64_t& _currentDayCount);

                    /**
                     * 判断参数 CurrentDayCount 是否已赋值
                     * @return CurrentDayCount 是否已赋值
                     * 
                     */
                    bool CurrentDayCountHasBeenSet() const;

                    /**
                     * 获取Alarm category details on the day
                     * @return CurrentDayOverView Alarm category details on the day
                     * 
                     */
                    std::vector<CosRiskInfo> GetCurrentDayOverView() const;

                    /**
                     * 设置Alarm category details on the day
                     * @param _currentDayOverView Alarm category details on the day
                     * 
                     */
                    void SetCurrentDayOverView(const std::vector<CosRiskInfo>& _currentDayOverView);

                    /**
                     * 判断参数 CurrentDayOverView 是否已赋值
                     * @return CurrentDayOverView 是否已赋值
                     * 
                     */
                    bool CurrentDayOverViewHasBeenSet() const;

                private:

                    /**
                     * Current date in string format
                     */
                    std::string m_currentDateStr;
                    bool m_currentDateStrHasBeenSet;

                    /**
                     * Total count for the current date
                     */
                    int64_t m_currentDayCount;
                    bool m_currentDayCountHasBeenSet;

                    /**
                     * Alarm category details on the day
                     */
                    std::vector<CosRiskInfo> m_currentDayOverView;
                    bool m_currentDayOverViewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSALARMTRENDINFO_H_
