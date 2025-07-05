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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AUTOCALLOUTTASKINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AUTOCALLOUTTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Automatic outbound call task list item.
                */
                class AutoCalloutTaskInfo : public AbstractModel
                {
                public:
                    AutoCalloutTaskInfo();
                    ~AutoCalloutTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task name.
                     * @return Name Task name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Task name.
                     * @param _name Task name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Number of called parties.
                     * @return CalleeCount Number of called parties.
                     * 
                     */
                    uint64_t GetCalleeCount() const;

                    /**
                     * 设置Number of called parties.
                     * @param _calleeCount Number of called parties.
                     * 
                     */
                    void SetCalleeCount(const uint64_t& _calleeCount);

                    /**
                     * 判断参数 CalleeCount 是否已赋值
                     * @return CalleeCount 是否已赋值
                     * 
                     */
                    bool CalleeCountHasBeenSet() const;

                    /**
                     * 获取List of calling numbers.
                     * @return Callers List of calling numbers.
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置List of calling numbers.
                     * @param _callers List of calling numbers.
                     * 
                     */
                    void SetCallers(const std::vector<std::string>& _callers);

                    /**
                     * 判断参数 Callers 是否已赋值
                     * @return Callers 是否已赋值
                     * 
                     */
                    bool CallersHasBeenSet() const;

                    /**
                     * 获取Start timestamp.
                     * @return NotBefore Start timestamp.
                     * 
                     */
                    int64_t GetNotBefore() const;

                    /**
                     * 设置Start timestamp.
                     * @param _notBefore Start timestamp.
                     * 
                     */
                    void SetNotBefore(const int64_t& _notBefore);

                    /**
                     * 判断参数 NotBefore 是否已赋值
                     * @return NotBefore 是否已赋值
                     * 
                     */
                    bool NotBeforeHasBeenSet() const;

                    /**
                     * 获取End timestamp
.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NotAfter End timestamp
.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNotAfter() const;

                    /**
                     * 设置End timestamp
.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _notAfter End timestamp
.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNotAfter(const int64_t& _notAfter);

                    /**
                     * 判断参数 NotAfter 是否已赋值
                     * @return NotAfter 是否已赋值
                     * 
                     */
                    bool NotAfterHasBeenSet() const;

                    /**
                     * 获取IvrId used by the task.
                     * @return IvrId IvrId used by the task.
                     * 
                     */
                    uint64_t GetIvrId() const;

                    /**
                     * 设置IvrId used by the task.
                     * @param _ivrId IvrId used by the task.
                     * 
                     */
                    void SetIvrId(const uint64_t& _ivrId);

                    /**
                     * 判断参数 IvrId 是否已赋值
                     * @return IvrId 是否已赋值
                     * 
                     */
                    bool IvrIdHasBeenSet() const;

                    /**
                     * 获取Task status:.
0 initial: task creation, call not started.
1 running.
2 completed: all calls in the task are completed.
3 ending: the task has expired, but there are still some calls not ended.
4 ended: task terminated due to expiration.
                     * @return State Task status:.
0 initial: task creation, call not started.
1 running.
2 completed: all calls in the task are completed.
3 ending: the task has expired, but there are still some calls not ended.
4 ended: task terminated due to expiration.
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置Task status:.
0 initial: task creation, call not started.
1 running.
2 completed: all calls in the task are completed.
3 ending: the task has expired, but there are still some calls not ended.
4 ended: task terminated due to expiration.
                     * @param _state Task status:.
0 initial: task creation, call not started.
1 running.
2 completed: all calls in the task are completed.
3 ending: the task has expired, but there are still some calls not ended.
4 ended: task terminated due to expiration.
                     * 
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<Task id>.
                     * @return TaskId <Task id>.
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置<Task id>.
                     * @param _taskId <Task id>.
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Task name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Number of called parties.
                     */
                    uint64_t m_calleeCount;
                    bool m_calleeCountHasBeenSet;

                    /**
                     * List of calling numbers.
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * Start timestamp.
                     */
                    int64_t m_notBefore;
                    bool m_notBeforeHasBeenSet;

                    /**
                     * End timestamp
.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_notAfter;
                    bool m_notAfterHasBeenSet;

                    /**
                     * IvrId used by the task.
                     */
                    uint64_t m_ivrId;
                    bool m_ivrIdHasBeenSet;

                    /**
                     * Task status:.
0 initial: task creation, call not started.
1 running.
2 completed: all calls in the task are completed.
3 ending: the task has expired, but there are still some calls not ended.
4 ended: task terminated due to expiration.
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <Task id>.
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AUTOCALLOUTTASKINFO_H_
