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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETRANSCODEREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETRANSCODEREQUEST_H_

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
                * DescribeTranscode request structure.
                */
                class DescribeTranscodeRequest : public AbstractModel
                {
                public:
                    DescribeTranscodeRequest();
                    ~DescribeTranscodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SdkAppId of the customer
                     * @return SdkAppId SdkAppId of the customer
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the customer
                     * @param _sdkAppId SdkAppId of the customer
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
                     * 获取Unique ID of the document transcoding task
                     * @return TaskId Unique ID of the document transcoding task
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Unique ID of the document transcoding task
                     * @param _taskId Unique ID of the document transcoding task
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * SdkAppId of the customer
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Unique ID of the document transcoding task
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETRANSCODEREQUEST_H_
