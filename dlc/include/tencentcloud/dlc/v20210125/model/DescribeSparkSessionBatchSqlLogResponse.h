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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKSESSIONBATCHSQLLOGRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKSESSIONBATCHSQLLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/SparkSessionBatchLog.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeSparkSessionBatchSqlLog response structure.
                */
                class DescribeSparkSessionBatchSqlLogResponse : public AbstractModel
                {
                public:
                    DescribeSparkSessionBatchSqlLogResponse();
                    ~DescribeSparkSessionBatchSqlLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The status. Valid values: `0` (initializing), `1` (successful), `2` (failed), `3` (canceled), and `4` (exception).
                     * @return State The status. Valid values: `0` (initializing), `1` (successful), `2` (failed), `3` (canceled), and `4` (exception).
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取The log information list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogSet The log information list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SparkSessionBatchLog> GetLogSet() const;

                    /**
                     * 判断参数 LogSet 是否已赋值
                     * @return LogSet 是否已赋值
                     * 
                     */
                    bool LogSetHasBeenSet() const;

                private:

                    /**
                     * The status. Valid values: `0` (initializing), `1` (successful), `2` (failed), `3` (canceled), and `4` (exception).
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * The log information list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SparkSessionBatchLog> m_logSet;
                    bool m_logSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKSESSIONBATCHSQLLOGRESPONSE_H_
