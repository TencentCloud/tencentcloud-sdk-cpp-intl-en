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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_IMPORTSNAPSHOTSRESPONSE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_IMPORTSNAPSHOTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * ImportSnapshots response structure.
                */
                class ImportSnapshotsResponse : public AbstractModel
                {
                public:
                    ImportSnapshotsResponse();
                    ~ImportSnapshotsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取`TaskId` is in the format of `AppInstanceId-taskId`, used to identify tasks of different clusters.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return TaskId `TaskId` is in the format of `AppInstanceId-taskId`, used to identify tasks of different clusters.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取`ApplicationId` is in the format of `AppInstanceId-applicationId`, which is used to identify applications of different clusters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationId `ApplicationId` is in the format of `AppInstanceId-applicationId`, which is used to identify applications of different clusters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                private:

                    /**
                     * `TaskId` is in the format of `AppInstanceId-taskId`, used to identify tasks of different clusters.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * `ApplicationId` is in the format of `AppInstanceId-applicationId`, which is used to identify applications of different clusters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_IMPORTSNAPSHOTSRESPONSE_H_
