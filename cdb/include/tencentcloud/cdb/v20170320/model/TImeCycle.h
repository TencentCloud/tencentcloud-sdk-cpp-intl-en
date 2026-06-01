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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_TIMECYCLE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_TIMECYCLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Scale-out period
                */
                class TImeCycle : public AbstractModel
                {
                public:
                    TImeCycle();
                    ~TImeCycle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to choose Monday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * @return Monday Whether to choose Monday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * 
                     */
                    bool GetMonday() const;

                    /**
                     * 设置Whether to choose Monday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * @param _monday Whether to choose Monday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * 
                     */
                    void SetMonday(const bool& _monday);

                    /**
                     * 判断参数 Monday 是否已赋值
                     * @return Monday 是否已赋值
                     * 
                     */
                    bool MondayHasBeenSet() const;

                    /**
                     * 获取During scaling, whether to choose Tuesday for expansion.
Description: Value "true" means select, value "false" means not select.
                     * @return Tuesday During scaling, whether to choose Tuesday for expansion.
Description: Value "true" means select, value "false" means not select.
                     * 
                     */
                    bool GetTuesday() const;

                    /**
                     * 设置During scaling, whether to choose Tuesday for expansion.
Description: Value "true" means select, value "false" means not select.
                     * @param _tuesday During scaling, whether to choose Tuesday for expansion.
Description: Value "true" means select, value "false" means not select.
                     * 
                     */
                    void SetTuesday(const bool& _tuesday);

                    /**
                     * 判断参数 Tuesday 是否已赋值
                     * @return Tuesday 是否已赋值
                     * 
                     */
                    bool TuesdayHasBeenSet() const;

                    /**
                     * 获取Whether to choose Wednesday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * @return Wednesday Whether to choose Wednesday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * 
                     */
                    bool GetWednesday() const;

                    /**
                     * 设置Whether to choose Wednesday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * @param _wednesday Whether to choose Wednesday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * 
                     */
                    void SetWednesday(const bool& _wednesday);

                    /**
                     * 判断参数 Wednesday 是否已赋值
                     * @return Wednesday 是否已赋值
                     * 
                     */
                    bool WednesdayHasBeenSet() const;

                    /**
                     * 获取Whether to choose Thursday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * @return Thursday Whether to choose Thursday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * 
                     */
                    bool GetThursday() const;

                    /**
                     * 设置Whether to choose Thursday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * @param _thursday Whether to choose Thursday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * 
                     */
                    void SetThursday(const bool& _thursday);

                    /**
                     * 判断参数 Thursday 是否已赋值
                     * @return Thursday 是否已赋值
                     * 
                     */
                    bool ThursdayHasBeenSet() const;

                    /**
                     * 获取Whether to choose Friday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * @return Friday Whether to choose Friday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * 
                     */
                    bool GetFriday() const;

                    /**
                     * 设置Whether to choose Friday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * @param _friday Whether to choose Friday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * 
                     */
                    void SetFriday(const bool& _friday);

                    /**
                     * 判断参数 Friday 是否已赋值
                     * @return Friday 是否已赋值
                     * 
                     */
                    bool FridayHasBeenSet() const;

                    /**
                     * 获取Whether to choose Saturday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * @return Saturday Whether to choose Saturday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * 
                     */
                    bool GetSaturday() const;

                    /**
                     * 设置Whether to choose Saturday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * @param _saturday Whether to choose Saturday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * 
                     */
                    void SetSaturday(const bool& _saturday);

                    /**
                     * 判断参数 Saturday 是否已赋值
                     * @return Saturday 是否已赋值
                     * 
                     */
                    bool SaturdayHasBeenSet() const;

                    /**
                     * 获取Whether to choose Sunday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * @return Sunday Whether to choose Sunday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * 
                     */
                    bool GetSunday() const;

                    /**
                     * 设置Whether to choose Sunday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * @param _sunday Whether to choose Sunday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     * 
                     */
                    void SetSunday(const bool& _sunday);

                    /**
                     * 判断参数 Sunday 是否已赋值
                     * @return Sunday 是否已赋值
                     * 
                     */
                    bool SundayHasBeenSet() const;

                private:

                    /**
                     * Whether to choose Monday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     */
                    bool m_monday;
                    bool m_mondayHasBeenSet;

                    /**
                     * During scaling, whether to choose Tuesday for expansion.
Description: Value "true" means select, value "false" means not select.
                     */
                    bool m_tuesday;
                    bool m_tuesdayHasBeenSet;

                    /**
                     * Whether to choose Wednesday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     */
                    bool m_wednesday;
                    bool m_wednesdayHasBeenSet;

                    /**
                     * Whether to choose Thursday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     */
                    bool m_thursday;
                    bool m_thursdayHasBeenSet;

                    /**
                     * Whether to choose Friday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     */
                    bool m_friday;
                    bool m_fridayHasBeenSet;

                    /**
                     * Whether to choose Saturday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     */
                    bool m_saturday;
                    bool m_saturdayHasBeenSet;

                    /**
                     * Whether to choose Sunday for scaling during the period.
Description: Value "true" means select, value "false" means not select.
                     */
                    bool m_sunday;
                    bool m_sundayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_TIMECYCLE_H_
