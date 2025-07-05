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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATESTEPDETAILINFO_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATESTEPDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * Information of steps in migration
                */
                class MigrateStepDetailInfo : public AbstractModel
                {
                public:
                    MigrateStepDetailInfo();
                    ~MigrateStepDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Step number
                     * @return StepNo Step number
                     * 
                     */
                    int64_t GetStepNo() const;

                    /**
                     * 设置Step number
                     * @param _stepNo Step number
                     * 
                     */
                    void SetStepNo(const int64_t& _stepNo);

                    /**
                     * 判断参数 StepNo 是否已赋值
                     * @return StepNo 是否已赋值
                     * 
                     */
                    bool StepNoHasBeenSet() const;

                    /**
                     * 获取Step name
                     * @return StepName Step name
                     * 
                     */
                    std::string GetStepName() const;

                    /**
                     * 设置Step name
                     * @param _stepName Step name
                     * 
                     */
                    void SetStepName(const std::string& _stepName);

                    /**
                     * 判断参数 StepName 是否已赋值
                     * @return StepName 是否已赋值
                     * 
                     */
                    bool StepNameHasBeenSet() const;

                    /**
                     * 获取Step ID
                     * @return StepId Step ID
                     * 
                     */
                    std::string GetStepId() const;

                    /**
                     * 设置Step ID
                     * @param _stepId Step ID
                     * 
                     */
                    void SetStepId(const std::string& _stepId);

                    /**
                     * 判断参数 StepId 是否已赋值
                     * @return StepId 是否已赋值
                     * 
                     */
                    bool StepIdHasBeenSet() const;

                    /**
                     * 获取Step status. Value range: 0 (default), 1 (succeeded), 2 (failed), 3 (in progress), 4 (not started)
                     * @return Status Step status. Value range: 0 (default), 1 (succeeded), 2 (failed), 3 (in progress), 4 (not started)
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Step status. Value range: 0 (default), 1 (succeeded), 2 (failed), 3 (in progress), 4 (not started)
                     * @param _status Step status. Value range: 0 (default), 1 (succeeded), 2 (failed), 3 (in progress), 4 (not started)
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Start time of current step in the format of `yyyy-mm-dd hh:mm:ss`. This field is meaningless if it does not exist or is empty
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Start time of current step in the format of `yyyy-mm-dd hh:mm:ss`. This field is meaningless if it does not exist or is empty
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of current step in the format of `yyyy-mm-dd hh:mm:ss`. This field is meaningless if it does not exist or is empty
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Start time of current step in the format of `yyyy-mm-dd hh:mm:ss`. This field is meaningless if it does not exist or is empty
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * Step number
                     */
                    int64_t m_stepNo;
                    bool m_stepNoHasBeenSet;

                    /**
                     * Step name
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * Step ID
                     */
                    std::string m_stepId;
                    bool m_stepIdHasBeenSet;

                    /**
                     * Step status. Value range: 0 (default), 1 (succeeded), 2 (failed), 3 (in progress), 4 (not started)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Start time of current step in the format of `yyyy-mm-dd hh:mm:ss`. This field is meaningless if it does not exist or is empty
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATESTEPDETAILINFO_H_
