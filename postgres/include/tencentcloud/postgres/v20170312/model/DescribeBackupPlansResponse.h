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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPPLANSRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPPLANSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/BackupPlan.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeBackupPlans response structure.
                */
                class DescribeBackupPlansResponse : public AbstractModel
                {
                public:
                    DescribeBackupPlansResponse();
                    ~DescribeBackupPlansResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The set of instance backup plans
                     * @return Plans The set of instance backup plans
                     * 
                     */
                    std::vector<BackupPlan> GetPlans() const;

                    /**
                     * 判断参数 Plans 是否已赋值
                     * @return Plans 是否已赋值
                     * 
                     */
                    bool PlansHasBeenSet() const;

                private:

                    /**
                     * The set of instance backup plans
                     */
                    std::vector<BackupPlan> m_plans;
                    bool m_plansHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPPLANSRESPONSE_H_
