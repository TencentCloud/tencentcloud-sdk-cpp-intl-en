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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DELETESCANTASKREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DELETESCANTASKREQUEST_H_

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
                * DeleteScanTask request structure.
                */
                class DeleteScanTaskRequest : public AbstractModel
                {
                public:
                    DeleteScanTaskRequest();
                    ~DeleteScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Module type. Malware (Trojan), Vul (vulnerability), and Baseline are currently available.
                     * @return ModuleType Module type. Malware (Trojan), Vul (vulnerability), and Baseline are currently available.
                     * 
                     */
                    std::string GetModuleType() const;

                    /**
                     * 设置Module type. Malware (Trojan), Vul (vulnerability), and Baseline are currently available.
                     * @param _moduleType Module type. Malware (Trojan), Vul (vulnerability), and Baseline are currently available.
                     * 
                     */
                    void SetModuleType(const std::string& _moduleType);

                    /**
                     * 判断参数 ModuleType 是否已赋值
                     * @return ModuleType 是否已赋值
                     * 
                     */
                    bool ModuleTypeHasBeenSet() const;

                    /**
                     * 获取Effective for selected servers; a string array of host QUUIDs
                     * @return QuuidList Effective for selected servers; a string array of host QUUIDs
                     * 
                     */
                    std::vector<std::string> GetQuuidList() const;

                    /**
                     * 设置Effective for selected servers; a string array of host QUUIDs
                     * @param _quuidList Effective for selected servers; a string array of host QUUIDs
                     * 
                     */
                    void SetQuuidList(const std::vector<std::string>& _quuidList);

                    /**
                     * 判断参数 QuuidList 是否已赋值
                     * @return QuuidList 是否已赋值
                     * 
                     */
                    bool QuuidListHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Module type. Malware (Trojan), Vul (vulnerability), and Baseline are currently available.
                     */
                    std::string m_moduleType;
                    bool m_moduleTypeHasBeenSet;

                    /**
                     * Effective for selected servers; a string array of host QUUIDs
                     */
                    std::vector<std::string> m_quuidList;
                    bool m_quuidListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DELETESCANTASKREQUEST_H_
