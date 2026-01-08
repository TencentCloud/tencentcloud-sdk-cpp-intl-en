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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIGCVIDEOTASKRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIGCVIDEOTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeAigcVideoTask response structure.
                */
                class DescribeAigcVideoTaskResponse : public AbstractModel
                {
                public:
                    DescribeAigcVideoTaskResponse();
                    ~DescribeAigcVideoTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Current task status:
WAIT: Pending,
RUN: In progress,
FAIL: Task failed,
DONE: Task completed successfully.
                     * @return Status Current task status:
WAIT: Pending,
RUN: In progress,
FAIL: Task failed,
DONE: Task completed successfully.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取When the task status is DONE, the returned video URL list will be available for 12 hours. Please retrieve and utilize the video promptly.
                     * @return VideoUrls When the task status is DONE, the returned video URL list will be available for 12 hours. Please retrieve and utilize the video promptly.
                     * 
                     */
                    std::vector<std::string> GetVideoUrls() const;

                    /**
                     * 判断参数 VideoUrls 是否已赋值
                     * @return VideoUrls 是否已赋值
                     * 
                     */
                    bool VideoUrlsHasBeenSet() const;

                    /**
                     * 获取The resolution of the output video. Example: 1080*720.
                     * @return Resolution The resolution of the output video. Example: 1080*720.
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取When the task status is FAIL, the failure information is returned.
                     * @return Message When the task status is FAIL, the failure information is returned.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Current task status:
WAIT: Pending,
RUN: In progress,
FAIL: Task failed,
DONE: Task completed successfully.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * When the task status is DONE, the returned video URL list will be available for 12 hours. Please retrieve and utilize the video promptly.
                     */
                    std::vector<std::string> m_videoUrls;
                    bool m_videoUrlsHasBeenSet;

                    /**
                     * The resolution of the output video. Example: 1080*720.
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * When the task status is FAIL, the failure information is returned.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIGCVIDEOTASKRESPONSE_H_
