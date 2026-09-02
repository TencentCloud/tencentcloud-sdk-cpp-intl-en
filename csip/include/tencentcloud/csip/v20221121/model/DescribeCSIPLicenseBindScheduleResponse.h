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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSIPLICENSEBINDSCHEDULERESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSIPLICENSEBINDSCHEDULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LicenseBindFailedItem.h>
#include <tencentcloud/csip/v20221121/model/LicenseBindScheduleItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCSIPLicenseBindSchedule response structure.
                */
                class DescribeCSIPLicenseBindScheduleResponse : public AbstractModel
                {
                public:
                    DescribeCSIPLicenseBindScheduleResponse();
                    ~DescribeCSIPLicenseBindScheduleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Task ID.</p>
                     * @return TaskId <p>Task ID.</p>
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Task status: INIT-initialization / RUNNING-in-progress / DONE-completed / FAILED-failed</p>
                     * @return Status <p>Task status: INIT-initialization / RUNNING-in-progress / DONE-completed / FAILED-failed</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Progress percentage 0-100</p>
                     * @return Schedule <p>Progress percentage 0-100</p>
                     * 
                     */
                    int64_t GetSchedule() const;

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     * 
                     */
                    bool ScheduleHasBeenSet() const;

                    /**
                     * 获取<p>Number of all machines (unaffected by filtering)</p>
                     * @return Total <p>Number of all machines (unaffected by filtering)</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>Number of successes</p>
                     * @return SuccessNum <p>Number of successes</p>
                     * 
                     */
                    int64_t GetSuccessNum() const;

                    /**
                     * 判断参数 SuccessNum 是否已赋值
                     * @return SuccessNum 是否已赋值
                     * 
                     */
                    bool SuccessNumHasBeenSet() const;

                    /**
                     * 获取<p>failure count</p>
                     * @return FailedNum <p>failure count</p>
                     * 
                     */
                    int64_t GetFailedNum() const;

                    /**
                     * 判断参数 FailedNum 是否已赋值
                     * @return FailedNum 是否已赋值
                     * 
                     */
                    bool FailedNumHasBeenSet() const;

                    /**
                     * 获取<p>Failure detail (full, including additional machine information)</p>
                     * @return FailedList <p>Failure detail (full, including additional machine information)</p>
                     * 
                     */
                    std::vector<LicenseBindFailedItem> GetFailedList() const;

                    /**
                     * 判断参数 FailedList 是否已赋值
                     * @return FailedList 是否已赋值
                     * 
                     */
                    bool FailedListHasBeenSet() const;

                    /**
                     * 获取<p>Detail by machine (affected by Filters and pagination)</p>
                     * @return List <p>Detail by machine (affected by Filters and pagination)</p>
                     * 
                     */
                    std::vector<LicenseBindScheduleItem> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task status: INIT-initialization / RUNNING-in-progress / DONE-completed / FAILED-failed</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Progress percentage 0-100</p>
                     */
                    int64_t m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * <p>Number of all machines (unaffected by filtering)</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>Number of successes</p>
                     */
                    int64_t m_successNum;
                    bool m_successNumHasBeenSet;

                    /**
                     * <p>failure count</p>
                     */
                    int64_t m_failedNum;
                    bool m_failedNumHasBeenSet;

                    /**
                     * <p>Failure detail (full, including additional machine information)</p>
                     */
                    std::vector<LicenseBindFailedItem> m_failedList;
                    bool m_failedListHasBeenSet;

                    /**
                     * <p>Detail by machine (affected by Filters and pagination)</p>
                     */
                    std::vector<LicenseBindScheduleItem> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSIPLICENSEBINDSCHEDULERESPONSE_H_
