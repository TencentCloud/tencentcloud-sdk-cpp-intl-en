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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TASKPROGRESSINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TASKPROGRESSINFO_H_

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
                * Task progress query.
                */
                class TaskProgressInfo : public AbstractModel
                {
                public:
                    TaskProgressInfo();
                    ~TaskProgressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Current step.
                     * @return CurrentStep Current step.
                     * 
                     */
                    std::string GetCurrentStep() const;

                    /**
                     * 设置Current step.
                     * @param _currentStep Current step.
                     * 
                     */
                    void SetCurrentStep(const std::string& _currentStep);

                    /**
                     * 判断参数 CurrentStep 是否已赋值
                     * @return CurrentStep 是否已赋值
                     * 
                     */
                    bool CurrentStepHasBeenSet() const;

                    /**
                     * 获取Current progress.
                     * @return CurrentStepProgress Current progress.
                     * 
                     */
                    int64_t GetCurrentStepProgress() const;

                    /**
                     * 设置Current progress.
                     * @param _currentStepProgress Current progress.
                     * 
                     */
                    void SetCurrentStepProgress(const int64_t& _currentStepProgress);

                    /**
                     * 判断参数 CurrentStepProgress 是否已赋值
                     * @return CurrentStepProgress 是否已赋值
                     * 
                     */
                    bool CurrentStepProgressHasBeenSet() const;

                    /**
                     * 获取Estimated Time
                     * @return CurrentStepRemainingTime Estimated Time
                     * 
                     */
                    std::string GetCurrentStepRemainingTime() const;

                    /**
                     * 设置Estimated Time
                     * @param _currentStepRemainingTime Estimated Time
                     * 
                     */
                    void SetCurrentStepRemainingTime(const std::string& _currentStepRemainingTime);

                    /**
                     * 判断参数 CurrentStepRemainingTime 是否已赋值
                     * @return CurrentStepRemainingTime 是否已赋值
                     * 
                     */
                    bool CurrentStepRemainingTimeHasBeenSet() const;

                private:

                    /**
                     * Current step.
                     */
                    std::string m_currentStep;
                    bool m_currentStepHasBeenSet;

                    /**
                     * Current progress.
                     */
                    int64_t m_currentStepProgress;
                    bool m_currentStepProgressHasBeenSet;

                    /**
                     * Estimated Time
                     */
                    std::string m_currentStepRemainingTime;
                    bool m_currentStepRemainingTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TASKPROGRESSINFO_H_
