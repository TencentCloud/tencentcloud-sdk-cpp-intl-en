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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MONTHDAY_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MONTHDAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * month date info
                */
                class MonthDay : public AbstractModel
                {
                public:
                    MonthDay();
                    ~MonthDay() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Month info
                     * @return Month Month info
                     * 
                     */
                    int64_t GetMonth() const;

                    /**
                     * 设置Month info
                     * @param _month Month info
                     * 
                     */
                    void SetMonth(const int64_t& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取date info
                     * @return Day date info
                     * 
                     */
                    int64_t GetDay() const;

                    /**
                     * 设置date info
                     * @param _day date info
                     * 
                     */
                    void SetDay(const int64_t& _day);

                    /**
                     * 判断参数 Day 是否已赋值
                     * @return Day 是否已赋值
                     * 
                     */
                    bool DayHasBeenSet() const;

                private:

                    /**
                     * Month info
                     */
                    int64_t m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * date info
                     */
                    int64_t m_day;
                    bool m_dayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MONTHDAY_H_
