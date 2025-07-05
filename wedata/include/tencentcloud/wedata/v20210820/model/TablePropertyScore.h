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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEPROPERTYSCORE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEPROPERTYSCORE_H_

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
                * Asset Rating of the table updated by day
                */
                class TablePropertyScore : public AbstractModel
                {
                public:
                    TablePropertyScore();
                    ~TablePropertyScore() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table ID
                     * @return TableId Table ID
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Table ID
                     * @param _tableId Table ID
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取Statistics Date
                     * @return DayTime Statistics Date
                     * 
                     */
                    std::string GetDayTime() const;

                    /**
                     * 设置Statistics Date
                     * @param _dayTime Statistics Date
                     * 
                     */
                    void SetDayTime(const std::string& _dayTime);

                    /**
                     * 判断参数 DayTime 是否已赋值
                     * @return DayTime 是否已赋值
                     * 
                     */
                    bool DayTimeHasBeenSet() const;

                    /**
                     * 获取Table Integrity Score
                     * @return Integrity Table Integrity Score
                     * 
                     */
                    double GetIntegrity() const;

                    /**
                     * 设置Table Integrity Score
                     * @param _integrity Table Integrity Score
                     * 
                     */
                    void SetIntegrity(const double& _integrity);

                    /**
                     * 判断参数 Integrity 是否已赋值
                     * @return Integrity 是否已赋值
                     * 
                     */
                    bool IntegrityHasBeenSet() const;

                    /**
                     * 获取Table Assurance Score
                     * @return Safety Table Assurance Score
                     * 
                     */
                    double GetSafety() const;

                    /**
                     * 设置Table Assurance Score
                     * @param _safety Table Assurance Score
                     * 
                     */
                    void SetSafety(const double& _safety);

                    /**
                     * 判断参数 Safety 是否已赋值
                     * @return Safety 是否已赋值
                     * 
                     */
                    bool SafetyHasBeenSet() const;

                    /**
                     * 获取Table Timeliness Score
                     * @return Timeliness Table Timeliness Score
                     * 
                     */
                    double GetTimeliness() const;

                    /**
                     * 设置Table Timeliness Score
                     * @param _timeliness Table Timeliness Score
                     * 
                     */
                    void SetTimeliness(const double& _timeliness);

                    /**
                     * 判断参数 Timeliness 是否已赋值
                     * @return Timeliness 是否已赋值
                     * 
                     */
                    bool TimelinessHasBeenSet() const;

                    /**
                     * 获取Table Stability Score
                     * @return Stability Table Stability Score
                     * 
                     */
                    double GetStability() const;

                    /**
                     * 设置Table Stability Score
                     * @param _stability Table Stability Score
                     * 
                     */
                    void SetStability(const double& _stability);

                    /**
                     * 判断参数 Stability 是否已赋值
                     * @return Stability 是否已赋值
                     * 
                     */
                    bool StabilityHasBeenSet() const;

                    /**
                     * 获取Table Normalization Score
                     * @return Normative Table Normalization Score
                     * 
                     */
                    double GetNormative() const;

                    /**
                     * 设置Table Normalization Score
                     * @param _normative Table Normalization Score
                     * 
                     */
                    void SetNormative(const double& _normative);

                    /**
                     * 判断参数 Normative 是否已赋值
                     * @return Normative 是否已赋值
                     * 
                     */
                    bool NormativeHasBeenSet() const;

                    /**
                     * 获取Average Asset Score
                     * @return Average Average Asset Score
                     * 
                     */
                    double GetAverage() const;

                    /**
                     * 设置Average Asset Score
                     * @param _average Average Asset Score
                     * 
                     */
                    void SetAverage(const double& _average);

                    /**
                     * 判断参数 Average 是否已赋值
                     * @return Average 是否已赋值
                     * 
                     */
                    bool AverageHasBeenSet() const;

                private:

                    /**
                     * Table ID
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Statistics Date
                     */
                    std::string m_dayTime;
                    bool m_dayTimeHasBeenSet;

                    /**
                     * Table Integrity Score
                     */
                    double m_integrity;
                    bool m_integrityHasBeenSet;

                    /**
                     * Table Assurance Score
                     */
                    double m_safety;
                    bool m_safetyHasBeenSet;

                    /**
                     * Table Timeliness Score
                     */
                    double m_timeliness;
                    bool m_timelinessHasBeenSet;

                    /**
                     * Table Stability Score
                     */
                    double m_stability;
                    bool m_stabilityHasBeenSet;

                    /**
                     * Table Normalization Score
                     */
                    double m_normative;
                    bool m_normativeHasBeenSet;

                    /**
                     * Average Asset Score
                     */
                    double m_average;
                    bool m_averageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEPROPERTYSCORE_H_
