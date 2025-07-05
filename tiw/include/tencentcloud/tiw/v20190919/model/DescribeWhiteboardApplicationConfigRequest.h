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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEWHITEBOARDAPPLICATIONCONFIGREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEWHITEBOARDAPPLICATIONCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeWhiteboardApplicationConfig request structure.
                */
                class DescribeWhiteboardApplicationConfigRequest : public AbstractModel
                {
                public:
                    DescribeWhiteboardApplicationConfigRequest();
                    ~DescribeWhiteboardApplicationConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SdkAppId of the whiteboard application.
                     * @return SdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the whiteboard application.
                     * @param _sdkAppId SdkAppId of the whiteboard application.
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
                     * 获取Task types to be queried.
recording: Real-time recording.
transcode: Document transcoding.
                     * @return TaskTypes Task types to be queried.
recording: Real-time recording.
transcode: Document transcoding.
                     * 
                     */
                    std::vector<std::string> GetTaskTypes() const;

                    /**
                     * 设置Task types to be queried.
recording: Real-time recording.
transcode: Document transcoding.
                     * @param _taskTypes Task types to be queried.
recording: Real-time recording.
transcode: Document transcoding.
                     * 
                     */
                    void SetTaskTypes(const std::vector<std::string>& _taskTypes);

                    /**
                     * 判断参数 TaskTypes 是否已赋值
                     * @return TaskTypes 是否已赋值
                     * 
                     */
                    bool TaskTypesHasBeenSet() const;

                    /**
                     * 获取SdkAppIds to be used to query configurations.
                     * @return SdkAppIds SdkAppIds to be used to query configurations.
                     * 
                     */
                    std::vector<int64_t> GetSdkAppIds() const;

                    /**
                     * 设置SdkAppIds to be used to query configurations.
                     * @param _sdkAppIds SdkAppIds to be used to query configurations.
                     * 
                     */
                    void SetSdkAppIds(const std::vector<int64_t>& _sdkAppIds);

                    /**
                     * 判断参数 SdkAppIds 是否已赋值
                     * @return SdkAppIds 是否已赋值
                     * 
                     */
                    bool SdkAppIdsHasBeenSet() const;

                private:

                    /**
                     * SdkAppId of the whiteboard application.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Task types to be queried.
recording: Real-time recording.
transcode: Document transcoding.
                     */
                    std::vector<std::string> m_taskTypes;
                    bool m_taskTypesHasBeenSet;

                    /**
                     * SdkAppIds to be used to query configurations.
                     */
                    std::vector<int64_t> m_sdkAppIds;
                    bool m_sdkAppIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEWHITEBOARDAPPLICATIONCONFIGREQUEST_H_
