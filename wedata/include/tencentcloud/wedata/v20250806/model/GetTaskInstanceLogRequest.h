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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_GETTASKINSTANCELOGREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_GETTASKINSTANCELOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * GetTaskInstanceLog request structure.
                */
                class GetTaskInstanceLogRequest : public AbstractModel
                {
                public:
                    GetTaskInstanceLogRequest();
                    ~GetTaskInstanceLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取**Project ID**. specifies the project ID.
                     * @return ProjectId **Project ID**. specifies the project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置**Project ID**. specifies the project ID.
                     * @param _projectId **Project ID**. specifies the project ID.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取**Instance unique id**.
                     * @return InstanceKey **Instance unique id**.
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置**Instance unique id**.
                     * @param _instanceKey **Instance unique id**.
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取**Instance Lifecycle Number** - Identifies a specific execution of an instance.
For example: the first run of a cyclic instance has a lifecycle number of 0. If the user reruns that instance later, the second execution will have a lifecycle number of 1;
By default, the latest execution is used.
                     * @return LifeRoundNum **Instance Lifecycle Number** - Identifies a specific execution of an instance.
For example: the first run of a cyclic instance has a lifecycle number of 0. If the user reruns that instance later, the second execution will have a lifecycle number of 1;
By default, the latest execution is used.
                     * 
                     */
                    uint64_t GetLifeRoundNum() const;

                    /**
                     * 设置**Instance Lifecycle Number** - Identifies a specific execution of an instance.
For example: the first run of a cyclic instance has a lifecycle number of 0. If the user reruns that instance later, the second execution will have a lifecycle number of 1;
By default, the latest execution is used.
                     * @param _lifeRoundNum **Instance Lifecycle Number** - Identifies a specific execution of an instance.
For example: the first run of a cyclic instance has a lifecycle number of 0. If the user reruns that instance later, the second execution will have a lifecycle number of 1;
By default, the latest execution is used.
                     * 
                     */
                    void SetLifeRoundNum(const uint64_t& _lifeRoundNum);

                    /**
                     * 判断参数 LifeRoundNum 是否已赋值
                     * @return LifeRoundNum 是否已赋值
                     * 
                     */
                    bool LifeRoundNumHasBeenSet() const;

                    /**
                     * 获取**Log level** default All - Info - Debug - Warn - Error - All.
                     * @return LogLevel **Log level** default All - Info - Debug - Warn - Error - All.
                     * 
                     */
                    std::string GetLogLevel() const;

                    /**
                     * 设置**Log level** default All - Info - Debug - Warn - Error - All.
                     * @param _logLevel **Log level** default All - Info - Debug - Warn - Error - All.
                     * 
                     */
                    void SetLogLevel(const std::string& _logLevel);

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     * 
                     */
                    bool LogLevelHasBeenSet() const;

                    /**
                     * 获取**Used when performing paginated log queries; has no specific business meaning.**

For the first query, the value is null.

For subsequent queries, use the value of the NextCursor field returned from the previous query.
                     * @return NextCursor **Used when performing paginated log queries; has no specific business meaning.**

For the first query, the value is null.

For subsequent queries, use the value of the NextCursor field returned from the previous query.
                     * 
                     */
                    std::string GetNextCursor() const;

                    /**
                     * 设置**Used when performing paginated log queries; has no specific business meaning.**

For the first query, the value is null.

For subsequent queries, use the value of the NextCursor field returned from the previous query.
                     * @param _nextCursor **Used when performing paginated log queries; has no specific business meaning.**

For the first query, the value is null.

For subsequent queries, use the value of the NextCursor field returned from the previous query.
                     * 
                     */
                    void SetNextCursor(const std::string& _nextCursor);

                    /**
                     * 判断参数 NextCursor 是否已赋值
                     * @return NextCursor 是否已赋值
                     * 
                     */
                    bool NextCursorHasBeenSet() const;

                private:

                    /**
                     * **Project ID**. specifies the project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * **Instance unique id**.
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * **Instance Lifecycle Number** - Identifies a specific execution of an instance.
For example: the first run of a cyclic instance has a lifecycle number of 0. If the user reruns that instance later, the second execution will have a lifecycle number of 1;
By default, the latest execution is used.
                     */
                    uint64_t m_lifeRoundNum;
                    bool m_lifeRoundNumHasBeenSet;

                    /**
                     * **Log level** default All - Info - Debug - Warn - Error - All.
                     */
                    std::string m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * **Used when performing paginated log queries; has no specific business meaning.**

For the first query, the value is null.

For subsequent queries, use the value of the NextCursor field returned from the previous query.
                     */
                    std::string m_nextCursor;
                    bool m_nextCursorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_GETTASKINSTANCELOGREQUEST_H_
