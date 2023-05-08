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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_BETAINFOBYACL_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_BETAINFOBYACL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Canary publish information of the rule
                */
                class BetaInfoByACL : public AbstractModel
                {
                public:
                    BetaInfoByACL();
                    ~BetaInfoByACL() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TaskId Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskName Task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TaskName Task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Last execution time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastTime Last execution time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置Last execution time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param LastTime Last execution time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     */
                    bool LastTimeHasBeenSet() const;

                private:

                    /**
                     * Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Last execution time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_BETAINFOBYACL_H_
