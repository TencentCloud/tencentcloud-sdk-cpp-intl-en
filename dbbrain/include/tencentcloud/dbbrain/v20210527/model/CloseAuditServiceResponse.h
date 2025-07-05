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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CLOSEAUDITSERVICERESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CLOSEAUDITSERVICERESPONSE_H_

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
                * CloseAuditService response structure.
                */
                class CloseAuditServiceResponse : public AbstractModel
                {
                public:
                    CloseAuditServiceResponse();
                    ~CloseAuditServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取If `0` is returned, audit is successfully disabled; otherwise, an exception will be returned, indicating that audit has failed to be disabled.
                     * @return TaskId If `0` is returned, audit is successfully disabled; otherwise, an exception will be returned, indicating that audit has failed to be disabled.
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * If `0` is returned, audit is successfully disabled; otherwise, an exception will be returned, indicating that audit has failed to be disabled.
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CLOSEAUDITSERVICERESPONSE_H_
