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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_STARTORMODIFYPREVENTUNINSTALLRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_STARTORMODIFYPREVENTUNINSTALLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ModifyLoginTypeFailInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * StartOrModifyPreventUninstall response structure.
                */
                class StartOrModifyPreventUninstallResponse : public AbstractModel
                {
                public:
                    StartOrModifyPreventUninstallResponse();
                    ~StartOrModifyPreventUninstallResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Failed machine list</p>
                     * @return FailList <p>Failed machine list</p>
                     * 
                     */
                    std::vector<ModifyLoginTypeFailInfo> GetFailList() const;

                    /**
                     * 判断参数 FailList 是否已赋值
                     * @return FailList 是否已赋值
                     * 
                     */
                    bool FailListHasBeenSet() const;

                    /**
                     * 获取<p>Number of machines that failed to enable</p>
                     * @return FailedHostCount <p>Number of machines that failed to enable</p>
                     * 
                     */
                    int64_t GetFailedHostCount() const;

                    /**
                     * 判断参数 FailedHostCount 是否已赋值
                     * @return FailedHostCount 是否已赋值
                     * 
                     */
                    bool FailedHostCountHasBeenSet() const;

                    /**
                     * 获取<p>Task ID.</p>
                     * @return TaskId <p>Task ID.</p>
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * <p>Failed machine list</p>
                     */
                    std::vector<ModifyLoginTypeFailInfo> m_failList;
                    bool m_failListHasBeenSet;

                    /**
                     * <p>Number of machines that failed to enable</p>
                     */
                    int64_t m_failedHostCount;
                    bool m_failedHostCountHasBeenSet;

                    /**
                     * <p>Task ID.</p>
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_STARTORMODIFYPREVENTUNINSTALLRESPONSE_H_
