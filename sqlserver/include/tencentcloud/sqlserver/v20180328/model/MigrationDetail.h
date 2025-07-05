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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATIONDETAIL_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrationStep.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Details of a cold backup import task
                */
                class MigrationDetail : public AbstractModel
                {
                public:
                    MigrationDetail();
                    ~MigrationDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number of steps
                     * @return StepAll Total number of steps
                     * 
                     */
                    int64_t GetStepAll() const;

                    /**
                     * 设置Total number of steps
                     * @param _stepAll Total number of steps
                     * 
                     */
                    void SetStepAll(const int64_t& _stepAll);

                    /**
                     * 判断参数 StepAll 是否已赋值
                     * @return StepAll 是否已赋值
                     * 
                     */
                    bool StepAllHasBeenSet() const;

                    /**
                     * 获取Current step
                     * @return StepNow Current step
                     * 
                     */
                    int64_t GetStepNow() const;

                    /**
                     * 设置Current step
                     * @param _stepNow Current step
                     * 
                     */
                    void SetStepNow(const int64_t& _stepNow);

                    /**
                     * 判断参数 StepNow 是否已赋值
                     * @return StepNow 是否已赋值
                     * 
                     */
                    bool StepNowHasBeenSet() const;

                    /**
                     * 获取Overall progress. For example, “30” means 30%.
                     * @return Progress Overall progress. For example, “30” means 30%.
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Overall progress. For example, “30” means 30%.
                     * @param _progress Overall progress. For example, “30” means 30%.
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Step information. ‘null’ means the migration has not started
Note: this field may return ‘null’, indicating that no valid values can be obtained.
                     * @return StepInfo Step information. ‘null’ means the migration has not started
Note: this field may return ‘null’, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MigrationStep> GetStepInfo() const;

                    /**
                     * 设置Step information. ‘null’ means the migration has not started
Note: this field may return ‘null’, indicating that no valid values can be obtained.
                     * @param _stepInfo Step information. ‘null’ means the migration has not started
Note: this field may return ‘null’, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepInfo(const std::vector<MigrationStep>& _stepInfo);

                    /**
                     * 判断参数 StepInfo 是否已赋值
                     * @return StepInfo 是否已赋值
                     * 
                     */
                    bool StepInfoHasBeenSet() const;

                private:

                    /**
                     * Total number of steps
                     */
                    int64_t m_stepAll;
                    bool m_stepAllHasBeenSet;

                    /**
                     * Current step
                     */
                    int64_t m_stepNow;
                    bool m_stepNowHasBeenSet;

                    /**
                     * Overall progress. For example, “30” means 30%.
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Step information. ‘null’ means the migration has not started
Note: this field may return ‘null’, indicating that no valid values can be obtained.
                     */
                    std::vector<MigrationStep> m_stepInfo;
                    bool m_stepInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATIONDETAIL_H_
