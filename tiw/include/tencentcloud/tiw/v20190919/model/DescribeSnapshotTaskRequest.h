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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBESNAPSHOTTASKREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBESNAPSHOTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeSnapshotTask request structure.
                */
                class DescribeSnapshotTaskRequest : public AbstractModel
                {
                public:
                    DescribeSnapshotTaskRequest();
                    ~DescribeSnapshotTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the query task.
                     * @return TaskID ID of the query task.
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置ID of the query task.
                     * @param TaskID ID of the query task.
                     */
                    void SetTaskID(const std::string& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取SdkAppId of the task.
                     * @return SdkAppId SdkAppId of the task.
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the task.
                     * @param SdkAppId SdkAppId of the task.
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                private:

                    /**
                     * ID of the query task.
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * SdkAppId of the task.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBESNAPSHOTTASKREQUEST_H_
