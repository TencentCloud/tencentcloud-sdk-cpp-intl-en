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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_KILLMYSQLTHREADSRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_KILLMYSQLTHREADSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * KillMySqlThreads response structure.
                */
                class KillMySqlThreadsResponse : public AbstractModel
                {
                public:
                    KillMySqlThreadsResponse();
                    ~KillMySqlThreadsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID list of MySQL sessions that have been killed.
                     * @return Threads The ID list of MySQL sessions that have been killed.
                     */
                    std::vector<int64_t> GetThreads() const;

                    /**
                     * 判断参数 Threads 是否已赋值
                     * @return Threads 是否已赋值
                     */
                    bool ThreadsHasBeenSet() const;

                    /**
                     * 获取Execution ID, which is output in the “Prepare” stage and used to specify the ID of the session to be killed in the “Commit” stage.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SqlExecId Execution ID, which is output in the “Prepare” stage and used to specify the ID of the session to be killed in the “Commit” stage.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetSqlExecId() const;

                    /**
                     * 判断参数 SqlExecId 是否已赋值
                     * @return SqlExecId 是否已赋值
                     */
                    bool SqlExecIdHasBeenSet() const;

                private:

                    /**
                     * The ID list of MySQL sessions that have been killed.
                     */
                    std::vector<int64_t> m_threads;
                    bool m_threadsHasBeenSet;

                    /**
                     * Execution ID, which is output in the “Prepare” stage and used to specify the ID of the session to be killed in the “Commit” stage.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_sqlExecId;
                    bool m_sqlExecIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_KILLMYSQLTHREADSRESPONSE_H_
