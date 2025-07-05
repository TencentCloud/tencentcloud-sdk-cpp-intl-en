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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKAPPTASKREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKAPPTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateSparkAppTask request structure.
                */
                class CreateSparkAppTaskRequest : public AbstractModel
                {
                public:
                    CreateSparkAppTaskRequest();
                    ~CreateSparkAppTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Spark job name
                     * @return JobName Spark job name
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Spark job name
                     * @param _jobName Spark job name
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取The input parameters of the Spark job, separated by space. They are generally used for periodic calls.
                     * @return CmdArgs The input parameters of the Spark job, separated by space. They are generally used for periodic calls.
                     * 
                     */
                    std::string GetCmdArgs() const;

                    /**
                     * 设置The input parameters of the Spark job, separated by space. They are generally used for periodic calls.
                     * @param _cmdArgs The input parameters of the Spark job, separated by space. They are generally used for periodic calls.
                     * 
                     */
                    void SetCmdArgs(const std::string& _cmdArgs);

                    /**
                     * 判断参数 CmdArgs 是否已赋值
                     * @return CmdArgs 是否已赋值
                     * 
                     */
                    bool CmdArgsHasBeenSet() const;

                private:

                    /**
                     * Spark job name
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * The input parameters of the Spark job, separated by space. They are generally used for periodic calls.
                     */
                    std::string m_cmdArgs;
                    bool m_cmdArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKAPPTASKREQUEST_H_
