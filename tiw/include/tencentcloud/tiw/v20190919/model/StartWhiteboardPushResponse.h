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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_STARTWHITEBOARDPUSHRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_STARTWHITEBOARDPUSHRESPONSE_H_

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
                * StartWhiteboardPush response structure.
                */
                class StartWhiteboardPushResponse : public AbstractModel
                {
                public:
                    StartWhiteboardPushResponse();
                    ~StartWhiteboardPushResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Push task ID.
                     * @return TaskId Push task ID.
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
                     * 获取Result parameters of the backup task.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return Backup Result parameters of the backup task.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBackup() const;

                    /**
                     * 判断参数 Backup 是否已赋值
                     * @return Backup 是否已赋值
                     * 
                     */
                    bool BackupHasBeenSet() const;

                private:

                    /**
                     * Push task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Result parameters of the backup task.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_backup;
                    bool m_backupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_STARTWHITEBOARDPUSHRESPONSE_H_
