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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLESCORESTATISTICSINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLESCORESTATISTICSINFO_H_

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
                * Table Scoring Statistics
                */
                class TableScoreStatisticsInfo : public AbstractModel
                {
                public:
                    TableScoreStatisticsInfo();
                    ~TableScoreStatisticsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Levels 1,2,3,4,5
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Level Levels 1,2,3,4,5
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置Levels 1,2,3,4,5
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _level Levels 1,2,3,4,5
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取PercentageNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Scale PercentageNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置PercentageNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _scale PercentageNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetScale(const int64_t& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                    /**
                     * 获取Table quantityNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TableNumber Table quantityNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTableNumber() const;

                    /**
                     * 设置Table quantityNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableNumber Table quantityNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableNumber(const int64_t& _tableNumber);

                    /**
                     * 判断参数 TableNumber 是否已赋值
                     * @return TableNumber 是否已赋值
                     * 
                     */
                    bool TableNumberHasBeenSet() const;

                private:

                    /**
                     * Levels 1,2,3,4,5
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * PercentageNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * Table quantityNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_tableNumber;
                    bool m_tableNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLESCORESTATISTICSINFO_H_
