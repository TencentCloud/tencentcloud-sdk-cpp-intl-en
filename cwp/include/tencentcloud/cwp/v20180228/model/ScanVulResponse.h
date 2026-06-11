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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ScanVul response structure.
                */
                class ScanVulResponse : public AbstractModel
                {
                public:
                    ScanVulResponse();
                    ~ScanVulResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Selected host includes basic version count
                     * @return BasicVersionCount Selected host includes basic version count
                     * 
                     */
                    uint64_t GetBasicVersionCount() const;

                    /**
                     * 判断参数 BasicVersionCount 是否已赋值
                     * @return BasicVersionCount 是否已赋值
                     * 
                     */
                    bool BasicVersionCountHasBeenSet() const;

                    /**
                     * 获取Number of machines for scan task creation
                     * @return SuccessCount Number of machines for scan task creation
                     * 
                     */
                    uint64_t GetSuccessCount() const;

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Selected host includes basic version count
                     */
                    uint64_t m_basicVersionCount;
                    bool m_basicVersionCountHasBeenSet;

                    /**
                     * Number of machines for scan task creation
                     */
                    uint64_t m_successCount;
                    bool m_successCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULRESPONSE_H_
