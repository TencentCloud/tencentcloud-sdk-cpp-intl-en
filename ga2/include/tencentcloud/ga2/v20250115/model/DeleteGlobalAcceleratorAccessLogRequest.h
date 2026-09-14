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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_DELETEGLOBALACCELERATORACCESSLOGREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_DELETEGLOBALACCELERATORACCESSLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * DeleteGlobalAcceleratorAccessLog request structure.
                */
                class DeleteGlobalAcceleratorAccessLogRequest : public AbstractModel
                {
                public:
                    DeleteGlobalAcceleratorAccessLogRequest();
                    ~DeleteGlobalAcceleratorAccessLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Log Unique Id</p>
                     * @return LogPushTaskId <p>Log Unique Id</p>
                     * 
                     */
                    std::string GetLogPushTaskId() const;

                    /**
                     * 设置<p>Log Unique Id</p>
                     * @param _logPushTaskId <p>Log Unique Id</p>
                     * 
                     */
                    void SetLogPushTaskId(const std::string& _logPushTaskId);

                    /**
                     * 判断参数 LogPushTaskId 是否已赋值
                     * @return LogPushTaskId 是否已赋值
                     * 
                     */
                    bool LogPushTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Unique Id of the GA instance</p>
                     * @return GlobalAcceleratorId <p>Unique Id of the GA instance</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>Unique Id of the GA instance</p>
                     * @param _globalAcceleratorId <p>Unique Id of the GA instance</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                private:

                    /**
                     * <p>Log Unique Id</p>
                     */
                    std::string m_logPushTaskId;
                    bool m_logPushTaskIdHasBeenSet;

                    /**
                     * <p>Unique Id of the GA instance</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_DELETEGLOBALACCELERATORACCESSLOGREQUEST_H_
