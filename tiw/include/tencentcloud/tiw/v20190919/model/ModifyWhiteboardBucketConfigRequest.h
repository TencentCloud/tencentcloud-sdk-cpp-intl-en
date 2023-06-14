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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_MODIFYWHITEBOARDBUCKETCONFIGREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_MODIFYWHITEBOARDBUCKETCONFIGREQUEST_H_

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
                * ModifyWhiteboardBucketConfig request structure.
                */
                class ModifyWhiteboardBucketConfigRequest : public AbstractModel
                {
                public:
                    ModifyWhiteboardBucketConfigRequest();
                    ~ModifyWhiteboardBucketConfigRequest() = default;
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
                     * 获取Task type to be queried.
recording: Real-time recording.
transcode: Document transcoding.
                     * @return TaskType Task type to be queried.
recording: Real-time recording.
transcode: Document transcoding.
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type to be queried.
recording: Real-time recording.
transcode: Document transcoding.
                     * @param _taskType Task type to be queried.
recording: Real-time recording.
transcode: Document transcoding.
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Name of the COS bucket.
                     * @return BucketName Name of the COS bucket.
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置Name of the COS bucket.
                     * @param _bucketName Name of the COS bucket.
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取Region of the COS bucket.
                     * @return BucketLocation Region of the COS bucket.
                     * 
                     */
                    std::string GetBucketLocation() const;

                    /**
                     * 设置Region of the COS bucket.
                     * @param _bucketLocation Region of the COS bucket.
                     * 
                     */
                    void SetBucketLocation(const std::string& _bucketLocation);

                    /**
                     * 判断参数 BucketLocation 是否已赋值
                     * @return BucketLocation 是否已赋值
                     * 
                     */
                    bool BucketLocationHasBeenSet() const;

                    /**
                     * 获取Resource prefix of the bucket.
                     * @return BucketPrefix Resource prefix of the bucket.
                     * 
                     */
                    std::string GetBucketPrefix() const;

                    /**
                     * 设置Resource prefix of the bucket.
                     * @param _bucketPrefix Resource prefix of the bucket.
                     * 
                     */
                    void SetBucketPrefix(const std::string& _bucketPrefix);

                    /**
                     * 判断参数 BucketPrefix 是否已赋值
                     * @return BucketPrefix 是否已赋值
                     * 
                     */
                    bool BucketPrefixHasBeenSet() const;

                    /**
                     * 获取Domain name of the URL of the bucket.
                     * @return ResultDomain Domain name of the URL of the bucket.
                     * 
                     */
                    std::string GetResultDomain() const;

                    /**
                     * 设置Domain name of the URL of the bucket.
                     * @param _resultDomain Domain name of the URL of the bucket.
                     * 
                     */
                    void SetResultDomain(const std::string& _resultDomain);

                    /**
                     * 判断参数 ResultDomain 是否已赋值
                     * @return ResultDomain 是否已赋值
                     * 
                     */
                    bool ResultDomainHasBeenSet() const;

                private:

                    /**
                     * SdkAppId of the whiteboard application.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Task type to be queried.
recording: Real-time recording.
transcode: Document transcoding.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Name of the COS bucket.
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * Region of the COS bucket.
                     */
                    std::string m_bucketLocation;
                    bool m_bucketLocationHasBeenSet;

                    /**
                     * Resource prefix of the bucket.
                     */
                    std::string m_bucketPrefix;
                    bool m_bucketPrefixHasBeenSet;

                    /**
                     * Domain name of the URL of the bucket.
                     */
                    std::string m_resultDomain;
                    bool m_resultDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_MODIFYWHITEBOARDBUCKETCONFIGREQUEST_H_
