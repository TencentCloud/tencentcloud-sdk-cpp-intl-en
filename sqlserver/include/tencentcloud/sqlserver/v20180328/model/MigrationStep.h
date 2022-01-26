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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATIONSTEP_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATIONSTEP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Migration steps of a cold backup import task
                */
                class MigrationStep : public AbstractModel
                {
                public:
                    MigrationStep();
                    ~MigrationStep() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Step sequence
                     * @return StepNo Step sequence
                     */
                    int64_t GetStepNo() const;

                    /**
                     * 设置Step sequence
                     * @param StepNo Step sequence
                     */
                    void SetStepNo(const int64_t& _stepNo);

                    /**
                     * 判断参数 StepNo 是否已赋值
                     * @return StepNo 是否已赋值
                     */
                    bool StepNoHasBeenSet() const;

                    /**
                     * 获取Step name
                     * @return StepName Step name
                     */
                    std::string GetStepName() const;

                    /**
                     * 设置Step name
                     * @param StepName Step name
                     */
                    void SetStepName(const std::string& _stepName);

                    /**
                     * 判断参数 StepName 是否已赋值
                     * @return StepName 是否已赋值
                     */
                    bool StepNameHasBeenSet() const;

                    /**
                     * 获取Step ID in English
                     * @return StepId Step ID in English
                     */
                    std::string GetStepId() const;

                    /**
                     * 设置Step ID in English
                     * @param StepId Step ID in English
                     */
                    void SetStepId(const std::string& _stepId);

                    /**
                     * 判断参数 StepId 是否已赋值
                     * @return StepId 是否已赋值
                     */
                    bool StepIdHasBeenSet() const;

                    /**
                     * 获取Step status: 0 (default value), 1 (succeeded), 2 (failed), 3 (in progress), 4 (not started)
                     * @return Status Step status: 0 (default value), 1 (succeeded), 2 (failed), 3 (in progress), 4 (not started)
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Step status: 0 (default value), 1 (succeeded), 2 (failed), 3 (in progress), 4 (not started)
                     * @param Status Step status: 0 (default value), 1 (succeeded), 2 (failed), 3 (in progress), 4 (not started)
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Step sequence
                     */
                    int64_t m_stepNo;
                    bool m_stepNoHasBeenSet;

                    /**
                     * Step name
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * Step ID in English
                     */
                    std::string m_stepId;
                    bool m_stepIdHasBeenSet;

                    /**
                     * Step status: 0 (default value), 1 (succeeded), 2 (failed), 3 (in progress), 4 (not started)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATIONSTEP_H_
