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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SCHEDULERTASKINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SCHEDULERTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/SchedulerTaskDetail.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Yarn resource scheduling history
                */
                class SchedulerTaskInfo : public AbstractModel
                {
                public:
                    SchedulerTaskInfo();
                    ~SchedulerTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scheduler type
                     * @return SchedulerName Scheduler type
                     * 
                     */
                    std::string GetSchedulerName() const;

                    /**
                     * 设置Scheduler type
                     * @param _schedulerName Scheduler type
                     * 
                     */
                    void SetSchedulerName(const std::string& _schedulerName);

                    /**
                     * 判断参数 SchedulerName 是否已赋值
                     * @return SchedulerName 是否已赋值
                     * 
                     */
                    bool SchedulerNameHasBeenSet() const;

                    /**
                     * 获取Operation type
                     * @return OperatorName Operation type
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置Operation type
                     * @param _operatorName Operation type
                     * 
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     * 
                     */
                    bool OperatorNameHasBeenSet() const;

                    /**
                     * 获取Start time.
                     * @return CreateTime Start time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Start time.
                     * @param _createTime Start time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Status.
                     * @return State Status.
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置Status.
                     * @param _state Status.
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Details Details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SchedulerTaskDetail> GetDetails() const;

                    /**
                     * 设置Details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _details Details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDetails(const std::vector<SchedulerTaskDetail>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * Scheduler type
                     */
                    std::string m_schedulerName;
                    bool m_schedulerNameHasBeenSet;

                    /**
                     * Operation type
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                    /**
                     * Start time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Status.
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SchedulerTaskDetail> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCHEDULERTASKINFO_H_
