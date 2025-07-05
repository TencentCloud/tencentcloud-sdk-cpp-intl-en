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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETEALARMNOTICEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETEALARMNOTICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteAlarmNotice request structure.
                */
                class DeleteAlarmNoticeRequest : public AbstractModel
                {
                public:
                    DeleteAlarmNoticeRequest();
                    ~DeleteAlarmNoticeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Notification group ID
                     * @return AlarmNoticeId Notification group ID
                     * 
                     */
                    std::string GetAlarmNoticeId() const;

                    /**
                     * 设置Notification group ID
                     * @param _alarmNoticeId Notification group ID
                     * 
                     */
                    void SetAlarmNoticeId(const std::string& _alarmNoticeId);

                    /**
                     * 判断参数 AlarmNoticeId 是否已赋值
                     * @return AlarmNoticeId 是否已赋值
                     * 
                     */
                    bool AlarmNoticeIdHasBeenSet() const;

                private:

                    /**
                     * Notification group ID
                     */
                    std::string m_alarmNoticeId;
                    bool m_alarmNoticeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETEALARMNOTICEREQUEST_H_
