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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CHECKDIDDEPLOYRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CHECKDIDDEPLOYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/Task.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * CheckDidDeploy response structure.
                */
                class CheckDidDeployResponse : public AbstractModel
                {
                public:
                    CheckDidDeployResponse();
                    ~CheckDidDeployResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The service information.
                     * @return Task The service information.
                     * 
                     */
                    Task GetTask() const;

                    /**
                     * 判断参数 Task 是否已赋值
                     * @return Task 是否已赋值
                     * 
                     */
                    bool TaskHasBeenSet() const;

                private:

                    /**
                     * The service information.
                     */
                    Task m_task;
                    bool m_taskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CHECKDIDDEPLOYRESPONSE_H_
