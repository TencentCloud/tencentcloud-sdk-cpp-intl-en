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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATEBACKUPRESPONSE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATEBACKUPRESPONSE_H_

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
                * CreateBackup response structure.
                */
                class CreateBackupResponse : public AbstractModel
                {
                public:
                    CreateBackupResponse();
                    ~CreateBackupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of backup creation task IDs
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return TaskIds List of backup creation task IDs
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取List of backup creation application IDs
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return ApplicationIds List of backup creation application IDs
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetApplicationIds() const;

                    /**
                     * 判断参数 ApplicationIds 是否已赋值
                     * @return ApplicationIds 是否已赋值
                     * 
                     */
                    bool ApplicationIdsHasBeenSet() const;

                private:

                    /**
                     * List of backup creation task IDs
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * List of backup creation application IDs
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_applicationIds;
                    bool m_applicationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATEBACKUPRESPONSE_H_
