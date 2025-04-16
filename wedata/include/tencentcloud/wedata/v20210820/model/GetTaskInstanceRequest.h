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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GETTASKINSTANCEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GETTASKINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * GetTaskInstance request structure.
                */
                class GetTaskInstanceRequest : public AbstractModel
                {
                public:
                    GetTaskInstanceRequest();
                    ~GetTaskInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取**Project ID**.
                     * @return ProjectId **Project ID**.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置**Project ID**.
                     * @param _projectId **Project ID**.
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
                     * 获取Unique identifier of an instance.
                     * @return InstanceKey Unique identifier of an instance.
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置Unique identifier of an instance.
                     * @param _instanceKey Unique identifier of an instance.
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
                     * 获取Time zone.
Time zone. specifies the time zone. the default value is UTC+8.
                     * @return ScheduleTimeZone Time zone.
Time zone. specifies the time zone. the default value is UTC+8.
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置Time zone.
Time zone. specifies the time zone. the default value is UTC+8.
                     * @param _scheduleTimeZone Time zone.
Time zone. specifies the time zone. the default value is UTC+8.
                     * 
                     */
                    void SetScheduleTimeZone(const std::string& _scheduleTimeZone);

                    /**
                     * 判断参数 ScheduleTimeZone 是否已赋值
                     * @return ScheduleTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduleTimeZoneHasBeenSet() const;

                private:

                    /**
                     * **Project ID**.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Unique identifier of an instance.
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * Time zone.
Time zone. specifies the time zone. the default value is UTC+8.
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETTASKINSTANCEREQUEST_H_
