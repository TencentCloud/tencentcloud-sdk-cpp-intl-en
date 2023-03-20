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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATERESULTDOWNLOADREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATERESULTDOWNLOADREQUEST_H_

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
                * CreateResultDownload request structure.
                */
                class CreateResultDownloadRequest : public AbstractModel
                {
                public:
                    CreateResultDownloadRequest();
                    ~CreateResultDownloadRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The result query task ID.
                     * @return TaskId The result query task ID.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The result query task ID.
                     * @param TaskId The result query task ID.
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取The result format.
                     * @return Format The result format.
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置The result format.
                     * @param Format The result format.
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Whether to re-generate a file to download. This parameter applies only when the last task is `timeout` or `error`.
                     * @return Force Whether to re-generate a file to download. This parameter applies only when the last task is `timeout` or `error`.
                     */
                    bool GetForce() const;

                    /**
                     * 设置Whether to re-generate a file to download. This parameter applies only when the last task is `timeout` or `error`.
                     * @param Force Whether to re-generate a file to download. This parameter applies only when the last task is `timeout` or `error`.
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * The result query task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The result format.
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Whether to re-generate a file to download. This parameter applies only when the last task is `timeout` or `error`.
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATERESULTDOWNLOADREQUEST_H_
