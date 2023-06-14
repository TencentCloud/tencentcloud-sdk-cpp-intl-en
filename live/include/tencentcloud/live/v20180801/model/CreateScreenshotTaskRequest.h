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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATESCREENSHOTTASKREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATESCREENSHOTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateScreenshotTask request structure.
                */
                class CreateScreenshotTaskRequest : public AbstractModel
                {
                public:
                    CreateScreenshotTaskRequest();
                    ~CreateScreenshotTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The stream name.
                     * @return StreamName The stream name.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置The stream name.
                     * @param _streamName The stream name.
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取The push domain.
                     * @return DomainName The push domain.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置The push domain.
                     * @param _domainName The push domain.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取The push path.
                     * @return AppName The push path.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置The push path.
                     * @param _appName The push path.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取The task end time, which must be a Unix timestamp and later than `StartTime` and the current time. The end time and start time cannot be more than 24 hours apart.
                     * @return EndTime The task end time, which must be a Unix timestamp and later than `StartTime` and the current time. The end time and start time cannot be more than 24 hours apart.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置The task end time, which must be a Unix timestamp and later than `StartTime` and the current time. The end time and start time cannot be more than 24 hours apart.
                     * @param _endTime The task end time, which must be a Unix timestamp and later than `StartTime` and the current time. The end time and start time cannot be more than 24 hours apart.
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The ID of the screencapturing template, which is returned by `CreateLiveSnapshotTemplate`. If an incorrect template ID is passed in, the screencapturing task will fail.
                     * @return TemplateId The ID of the screencapturing template, which is returned by `CreateLiveSnapshotTemplate`. If an incorrect template ID is passed in, the screencapturing task will fail.
                     * 
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置The ID of the screencapturing template, which is returned by `CreateLiveSnapshotTemplate`. If an incorrect template ID is passed in, the screencapturing task will fail.
                     * @param _templateId The ID of the screencapturing template, which is returned by `CreateLiveSnapshotTemplate`. If an incorrect template ID is passed in, the screencapturing task will fail.
                     * 
                     */
                    void SetTemplateId(const uint64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取The task start time, which must be a Unix timestamp and cannot be later than six days from the current time. If you do not specify this parameter, the task will start immediately.
                     * @return StartTime The task start time, which must be a Unix timestamp and cannot be later than six days from the current time. If you do not specify this parameter, the task will start immediately.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置The task start time, which must be a Unix timestamp and cannot be later than six days from the current time. If you do not specify this parameter, the task will start immediately.
                     * @param _startTime The task start time, which must be a Unix timestamp and cannot be later than six days from the current time. If you do not specify this parameter, the task will start immediately.
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The publishing type. Valid values:
`0` (default): Live stream
`1`: Mixed stream
                     * @return StreamType The publishing type. Valid values:
`0` (default): Live stream
`1`: Mixed stream
                     * 
                     */
                    uint64_t GetStreamType() const;

                    /**
                     * 设置The publishing type. Valid values:
`0` (default): Live stream
`1`: Mixed stream
                     * @param _streamType The publishing type. Valid values:
`0` (default): Live stream
`1`: Mixed stream
                     * 
                     */
                    void SetStreamType(const uint64_t& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     * 
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取An extension field, which is not defined currently and is empty by default.
                     * @return Extension An extension field, which is not defined currently and is empty by default.
                     * 
                     */
                    std::string GetExtension() const;

                    /**
                     * 设置An extension field, which is not defined currently and is empty by default.
                     * @param _extension An extension field, which is not defined currently and is empty by default.
                     * 
                     */
                    void SetExtension(const std::string& _extension);

                    /**
                     * 判断参数 Extension 是否已赋值
                     * @return Extension 是否已赋值
                     * 
                     */
                    bool ExtensionHasBeenSet() const;

                private:

                    /**
                     * The stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * The push domain.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * The push path.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * The task end time, which must be a Unix timestamp and later than `StartTime` and the current time. The end time and start time cannot be more than 24 hours apart.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The ID of the screencapturing template, which is returned by `CreateLiveSnapshotTemplate`. If an incorrect template ID is passed in, the screencapturing task will fail.
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * The task start time, which must be a Unix timestamp and cannot be later than six days from the current time. If you do not specify this parameter, the task will start immediately.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The publishing type. Valid values:
`0` (default): Live stream
`1`: Mixed stream
                     */
                    uint64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * An extension field, which is not defined currently and is empty by default.
                     */
                    std::string m_extension;
                    bool m_extensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATESCREENSHOTTASKREQUEST_H_
