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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SKIPCHECKITEMREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SKIPCHECKITEMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * SkipCheckItem request structure.
                */
                class SkipCheckItemRequest : public AbstractModel
                {
                public:
                    SkipCheckItemRequest();
                    ~SkipCheckItemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data migration task ID
                     * @return JobId Data migration task ID
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Data migration task ID
                     * @param JobId Data migration task ID
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取ID of the check step to be skipped, which is obtained in the `StepInfo[i].StepId` field returned by the `DescribeMigrationCheckJob` API, such as "OptimizeCheck".
                     * @return StepIds ID of the check step to be skipped, which is obtained in the `StepInfo[i].StepId` field returned by the `DescribeMigrationCheckJob` API, such as "OptimizeCheck".
                     */
                    std::vector<std::string> GetStepIds() const;

                    /**
                     * 设置ID of the check step to be skipped, which is obtained in the `StepInfo[i].StepId` field returned by the `DescribeMigrationCheckJob` API, such as "OptimizeCheck".
                     * @param StepIds ID of the check step to be skipped, which is obtained in the `StepInfo[i].StepId` field returned by the `DescribeMigrationCheckJob` API, such as "OptimizeCheck".
                     */
                    void SetStepIds(const std::vector<std::string>& _stepIds);

                    /**
                     * 判断参数 StepIds 是否已赋值
                     * @return StepIds 是否已赋值
                     */
                    bool StepIdsHasBeenSet() const;

                    /**
                     * 获取
                     * @return ForeignKeyFlag 
                     */
                    std::string GetForeignKeyFlag() const;

                    /**
                     * 设置
                     * @param ForeignKeyFlag 
                     */
                    void SetForeignKeyFlag(const std::string& _foreignKeyFlag);

                    /**
                     * 判断参数 ForeignKeyFlag 是否已赋值
                     * @return ForeignKeyFlag 是否已赋值
                     */
                    bool ForeignKeyFlagHasBeenSet() const;

                private:

                    /**
                     * Data migration task ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * ID of the check step to be skipped, which is obtained in the `StepInfo[i].StepId` field returned by the `DescribeMigrationCheckJob` API, such as "OptimizeCheck".
                     */
                    std::vector<std::string> m_stepIds;
                    bool m_stepIdsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_foreignKeyFlag;
                    bool m_foreignKeyFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SKIPCHECKITEMREQUEST_H_
