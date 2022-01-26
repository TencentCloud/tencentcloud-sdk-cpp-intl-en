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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEALARMNOTICESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEALARMNOTICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DeleteAlarmNotices request structure.
                */
                class DeleteAlarmNoticesRequest : public AbstractModel
                {
                public:
                    DeleteAlarmNoticesRequest();
                    ~DeleteAlarmNoticesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Module name. Enter "monitor" here
                     * @return Module Module name. Enter "monitor" here
                     */
                    std::string GetModule() const;

                    /**
                     * 设置Module name. Enter "monitor" here
                     * @param Module Module name. Enter "monitor" here
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Alarm notification template ID list
                     * @return NoticeIds Alarm notification template ID list
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置Alarm notification template ID list
                     * @param NoticeIds Alarm notification template ID list
                     */
                    void SetNoticeIds(const std::vector<std::string>& _noticeIds);

                    /**
                     * 判断参数 NoticeIds 是否已赋值
                     * @return NoticeIds 是否已赋值
                     */
                    bool NoticeIdsHasBeenSet() const;

                private:

                    /**
                     * Module name. Enter "monitor" here
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Alarm notification template ID list
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEALARMNOTICESREQUEST_H_
