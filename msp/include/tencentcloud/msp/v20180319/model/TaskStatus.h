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

#ifndef TENCENTCLOUD_MSP_V20180319_MODEL_TASKSTATUS_H_
#define TENCENTCLOUD_MSP_V20180319_MODEL_TASKSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Msp
    {
        namespace V20180319
        {
            namespace Model
            {
                /**
                * Migration details list
                */
                class TaskStatus : public AbstractModel
                {
                public:
                    TaskStatus();
                    ~TaskStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Migration status
                     * @return Status Migration status
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Migration status
                     * @param Status Migration status
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Migration progress
                     * @return Progress Migration progress
                     */
                    std::string GetProgress() const;

                    /**
                     * 设置Migration progress
                     * @param Progress Migration progress
                     */
                    void SetProgress(const std::string& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Migration date
                     * @return UpdateTime Migration date
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Migration date
                     * @param UpdateTime Migration date
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Migration status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Migration progress
                     */
                    std::string m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Migration date
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MSP_V20180319_MODEL_TASKSTATUS_H_
