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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETIMEWINDOWRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETIMEWINDOWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeTimeWindow response structure.
                */
                class DescribeTimeWindowResponse : public AbstractModel
                {
                public:
                    DescribeTimeWindowResponse();
                    ~DescribeTimeWindowResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of maintenance time windows on Monday.
                     * @return Monday List of maintenance time windows on Monday.
                     * 
                     */
                    std::vector<std::string> GetMonday() const;

                    /**
                     * 判断参数 Monday 是否已赋值
                     * @return Monday 是否已赋值
                     * 
                     */
                    bool MondayHasBeenSet() const;

                    /**
                     * 获取List of maintenance time windows on Tuesday.
                     * @return Tuesday List of maintenance time windows on Tuesday.
                     * 
                     */
                    std::vector<std::string> GetTuesday() const;

                    /**
                     * 判断参数 Tuesday 是否已赋值
                     * @return Tuesday 是否已赋值
                     * 
                     */
                    bool TuesdayHasBeenSet() const;

                    /**
                     * 获取List of maintenance time windows on Wednesday.
                     * @return Wednesday List of maintenance time windows on Wednesday.
                     * 
                     */
                    std::vector<std::string> GetWednesday() const;

                    /**
                     * 判断参数 Wednesday 是否已赋值
                     * @return Wednesday 是否已赋值
                     * 
                     */
                    bool WednesdayHasBeenSet() const;

                    /**
                     * 获取List of maintenance time windows on Thursday.
                     * @return Thursday List of maintenance time windows on Thursday.
                     * 
                     */
                    std::vector<std::string> GetThursday() const;

                    /**
                     * 判断参数 Thursday 是否已赋值
                     * @return Thursday 是否已赋值
                     * 
                     */
                    bool ThursdayHasBeenSet() const;

                    /**
                     * 获取List of maintenance time windows on Friday.
                     * @return Friday List of maintenance time windows on Friday.
                     * 
                     */
                    std::vector<std::string> GetFriday() const;

                    /**
                     * 判断参数 Friday 是否已赋值
                     * @return Friday 是否已赋值
                     * 
                     */
                    bool FridayHasBeenSet() const;

                    /**
                     * 获取List of maintenance time windows on Saturday.
                     * @return Saturday List of maintenance time windows on Saturday.
                     * 
                     */
                    std::vector<std::string> GetSaturday() const;

                    /**
                     * 判断参数 Saturday 是否已赋值
                     * @return Saturday 是否已赋值
                     * 
                     */
                    bool SaturdayHasBeenSet() const;

                    /**
                     * 获取List of maintenance time windows on Sunday.
                     * @return Sunday List of maintenance time windows on Sunday.
                     * 
                     */
                    std::vector<std::string> GetSunday() const;

                    /**
                     * 判断参数 Sunday 是否已赋值
                     * @return Sunday 是否已赋值
                     * 
                     */
                    bool SundayHasBeenSet() const;

                    /**
                     * 获取Maximum data delay threshold
                     * @return MaxDelayTime Maximum data delay threshold
                     * 
                     */
                    uint64_t GetMaxDelayTime() const;

                    /**
                     * 判断参数 MaxDelayTime 是否已赋值
                     * @return MaxDelayTime 是否已赋值
                     * 
                     */
                    bool MaxDelayTimeHasBeenSet() const;

                private:

                    /**
                     * List of maintenance time windows on Monday.
                     */
                    std::vector<std::string> m_monday;
                    bool m_mondayHasBeenSet;

                    /**
                     * List of maintenance time windows on Tuesday.
                     */
                    std::vector<std::string> m_tuesday;
                    bool m_tuesdayHasBeenSet;

                    /**
                     * List of maintenance time windows on Wednesday.
                     */
                    std::vector<std::string> m_wednesday;
                    bool m_wednesdayHasBeenSet;

                    /**
                     * List of maintenance time windows on Thursday.
                     */
                    std::vector<std::string> m_thursday;
                    bool m_thursdayHasBeenSet;

                    /**
                     * List of maintenance time windows on Friday.
                     */
                    std::vector<std::string> m_friday;
                    bool m_fridayHasBeenSet;

                    /**
                     * List of maintenance time windows on Saturday.
                     */
                    std::vector<std::string> m_saturday;
                    bool m_saturdayHasBeenSet;

                    /**
                     * List of maintenance time windows on Sunday.
                     */
                    std::vector<std::string> m_sunday;
                    bool m_sundayHasBeenSet;

                    /**
                     * Maximum data delay threshold
                     */
                    uint64_t m_maxDelayTime;
                    bool m_maxDelayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETIMEWINDOWRESPONSE_H_
