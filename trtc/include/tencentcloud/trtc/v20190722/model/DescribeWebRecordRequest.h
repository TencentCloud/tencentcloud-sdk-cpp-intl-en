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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEWEBRECORDREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEWEBRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeWebRecord request structure.
                */
                class DescribeWebRecordRequest : public AbstractModel
                {
                public:
                    DescribeWebRecordRequest();
                    ~DescribeWebRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The task ID returned when starting web-page recording
                     * @return TaskId The task ID returned when starting web-page recording
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The task ID returned when starting web-page recording
                     * @param _taskId The task ID returned when starting web-page recording
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
                     * 获取SdkAppId passed when initiating web-page recording
                     * @return SdkAppId SdkAppId passed when initiating web-page recording
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId passed when initiating web-page recording
                     * @param _sdkAppId SdkAppId passed when initiating web-page recording
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取RecordId passed when initiating recording. When passing this value, you need to pass SdkAppId
                     * @return RecordId RecordId passed when initiating recording. When passing this value, you need to pass SdkAppId
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置RecordId passed when initiating recording. When passing this value, you need to pass SdkAppId
                     * @param _recordId RecordId passed when initiating recording. When passing this value, you need to pass SdkAppId
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                private:

                    /**
                     * The task ID returned when starting web-page recording
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * SdkAppId passed when initiating web-page recording
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * RecordId passed when initiating recording. When passing this value, you need to pass SdkAppId
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEWEBRECORDREQUEST_H_
