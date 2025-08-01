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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLOCKSTATUS_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLOCKSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Task Lock Status
                */
                class TaskLockStatus : public AbstractModel
                {
                public:
                    TaskLockStatus();
                    ~TaskLockStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Lock Holder
                     * @return Locker Lock Holder
                     * 
                     */
                    std::string GetLocker() const;

                    /**
                     * 设置Lock Holder
                     * @param _locker Lock Holder
                     * 
                     */
                    void SetLocker(const std::string& _locker);

                    /**
                     * 判断参数 Locker 是否已赋值
                     * @return Locker 是否已赋值
                     * 
                     */
                    bool LockerHasBeenSet() const;

                    /**
                     * 获取Is the current operating user the lock holder? 1 means yes, 0 means no
                     * @return IsLocker Is the current operating user the lock holder? 1 means yes, 0 means no
                     * 
                     */
                    int64_t GetIsLocker() const;

                    /**
                     * 设置Is the current operating user the lock holder? 1 means yes, 0 means no
                     * @param _isLocker Is the current operating user the lock holder? 1 means yes, 0 means no
                     * 
                     */
                    void SetIsLocker(const int64_t& _isLocker);

                    /**
                     * 判断参数 IsLocker 是否已赋值
                     * @return IsLocker 是否已赋值
                     * 
                     */
                    bool IsLockerHasBeenSet() const;

                    /**
                     * 获取Is lock contention possible? 1 means yes, 0 means no
                     * @return IsRob Is lock contention possible? 1 means yes, 0 means no
                     * 
                     */
                    int64_t GetIsRob() const;

                    /**
                     * 设置Is lock contention possible? 1 means yes, 0 means no
                     * @param _isRob Is lock contention possible? 1 means yes, 0 means no
                     * 
                     */
                    void SetIsRob(const int64_t& _isRob);

                    /**
                     * 判断参数 IsRob 是否已赋值
                     * @return IsRob 是否已赋值
                     * 
                     */
                    bool IsRobHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Lock Holder
                     */
                    std::string m_locker;
                    bool m_lockerHasBeenSet;

                    /**
                     * Is the current operating user the lock holder? 1 means yes, 0 means no
                     */
                    int64_t m_isLocker;
                    bool m_isLockerHasBeenSet;

                    /**
                     * Is lock contention possible? 1 means yes, 0 means no
                     */
                    int64_t m_isRob;
                    bool m_isRobHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLOCKSTATUS_H_
