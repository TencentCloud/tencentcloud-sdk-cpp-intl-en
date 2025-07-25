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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEHEAT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEHEAT_H_

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
                * Heat value of the table in the past seven days (excluding today)
                */
                class TableHeat : public AbstractModel
                {
                public:
                    TableHeat();
                    ~TableHeat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TableId Table IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Table IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableId Table IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Statistics DateNote: This field may return null, indicating that no valid value can be obtained.
                     * @return DayTime Statistics DateNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDayTime() const;

                    /**
                     * 设置Statistics DateNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _dayTime Statistics DateNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Popularity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Heat Popularity
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetHeat() const;

                    /**
                     * 设置Popularity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _heat Popularity
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetHeat(const double& _heat);

                    /**
                     * 判断参数 Heat 是否已赋值
                     * @return Heat 是否已赋值
                     * 
                     */
                    bool HeatHasBeenSet() const;

                    /**
                     * 获取Maximum Popularity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MaxHeat Maximum Popularity
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetMaxHeat() const;

                    /**
                     * 设置Maximum Popularity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _maxHeat Maximum Popularity
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMaxHeat(const double& _maxHeat);

                    /**
                     * 判断参数 MaxHeat 是否已赋值
                     * @return MaxHeat 是否已赋值
                     * 
                     */
                    bool MaxHeatHasBeenSet() const;

                private:

                    /**
                     * Table IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Statistics DateNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dayTime;
                    bool m_dayTimeHasBeenSet;

                    /**
                     * Popularity
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_heat;
                    bool m_heatHasBeenSet;

                    /**
                     * Maximum Popularity
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_maxHeat;
                    bool m_maxHeatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEHEAT_H_
