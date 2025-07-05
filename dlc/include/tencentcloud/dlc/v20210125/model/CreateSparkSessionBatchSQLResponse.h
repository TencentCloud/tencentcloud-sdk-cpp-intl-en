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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKSESSIONBATCHSQLRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKSESSIONBATCHSQLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/StatementInformation.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateSparkSessionBatchSQL response structure.
                */
                class CreateSparkSessionBatchSQLResponse : public AbstractModel
                {
                public:
                    CreateSparkSessionBatchSQLResponse();
                    ~CreateSparkSessionBatchSQLResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique identifier of a batch task.
                     * @return BatchId The unique identifier of a batch task.
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取Statement task list information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Statements Statement task list information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<StatementInformation> GetStatements() const;

                    /**
                     * 判断参数 Statements 是否已赋值
                     * @return Statements 是否已赋值
                     * 
                     */
                    bool StatementsHasBeenSet() const;

                private:

                    /**
                     * The unique identifier of a batch task.
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * Statement task list information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<StatementInformation> m_statements;
                    bool m_statementsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKSESSIONBATCHSQLRESPONSE_H_
