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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKDAGBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKDAGBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TriggerTaskBrief.h>
#include <tencentcloud/wedata/v20250806/model/TriggerTaskLinkBrief.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Workflow task summary information.
                */
                class TriggerTaskDAGBrief : public AbstractModel
                {
                public:
                    TriggerTaskDAGBrief();
                    ~TriggerTaskDAGBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task information collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TriggerTasks Task information collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TriggerTaskBrief> GetTriggerTasks() const;

                    /**
                     * 设置Task information collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _triggerTasks Task information collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTriggerTasks(const std::vector<TriggerTaskBrief>& _triggerTasks);

                    /**
                     * 判断参数 TriggerTasks 是否已赋值
                     * @return TriggerTasks 是否已赋值
                     * 
                     */
                    bool TriggerTasksHasBeenSet() const;

                    /**
                     * 获取Task connection information collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TriggerTaskLinks Task connection information collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TriggerTaskLinkBrief> GetTriggerTaskLinks() const;

                    /**
                     * 设置Task connection information collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _triggerTaskLinks Task connection information collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTriggerTaskLinks(const std::vector<TriggerTaskLinkBrief>& _triggerTaskLinks);

                    /**
                     * 判断参数 TriggerTaskLinks 是否已赋值
                     * @return TriggerTaskLinks 是否已赋值
                     * 
                     */
                    bool TriggerTaskLinksHasBeenSet() const;

                private:

                    /**
                     * Task information collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TriggerTaskBrief> m_triggerTasks;
                    bool m_triggerTasksHasBeenSet;

                    /**
                     * Task connection information collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TriggerTaskLinkBrief> m_triggerTaskLinks;
                    bool m_triggerTaskLinksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKDAGBRIEF_H_
