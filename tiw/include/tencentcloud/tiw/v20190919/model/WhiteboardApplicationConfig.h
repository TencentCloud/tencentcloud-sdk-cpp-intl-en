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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDAPPLICATIONCONFIG_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDAPPLICATIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Whiteboard application configuration, including the resource bucket, domain name, callback URL, and callback key.
                */
                class WhiteboardApplicationConfig : public AbstractModel
                {
                public:
                    WhiteboardApplicationConfig();
                    ~WhiteboardApplicationConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task type.

recording: Real-time recording.
transcode: Document transcoding.
                     * @return TaskType Task type.

recording: Real-time recording.
transcode: Document transcoding.
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type.

recording: Real-time recording.
transcode: Document transcoding.
                     * @param _taskType Task type.

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
                     * 获取Bucket name.
                     * @return BucketName Bucket name.
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置Bucket name.
                     * @param _bucketName Bucket name.
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
                     * 获取Region of the bucket.
                     * @return BucketLocation Region of the bucket.
                     * 
                     */
                    std::string GetBucketLocation() const;

                    /**
                     * 设置Region of the bucket.
                     * @param _bucketLocation Region of the bucket.
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
                     * 获取Destination CDN domain name.
                     * @return ResultDomain Destination CDN domain name.
                     * 
                     */
                    std::string GetResultDomain() const;

                    /**
                     * 设置Destination CDN domain name.
                     * @param _resultDomain Destination CDN domain name.
                     * 
                     */
                    void SetResultDomain(const std::string& _resultDomain);

                    /**
                     * 判断参数 ResultDomain 是否已赋值
                     * @return ResultDomain 是否已赋值
                     * 
                     */
                    bool ResultDomainHasBeenSet() const;

                    /**
                     * 获取Callback URL.
                     * @return Callback Callback URL.
                     * 
                     */
                    std::string GetCallback() const;

                    /**
                     * 设置Callback URL.
                     * @param _callback Callback URL.
                     * 
                     */
                    void SetCallback(const std::string& _callback);

                    /**
                     * 判断参数 Callback 是否已赋值
                     * @return Callback 是否已赋值
                     * 
                     */
                    bool CallbackHasBeenSet() const;

                    /**
                     * 获取Callback authentication key.
                     * @return CallbackKey Callback authentication key.
                     * 
                     */
                    std::string GetCallbackKey() const;

                    /**
                     * 设置Callback authentication key.
                     * @param _callbackKey Callback authentication key.
                     * 
                     */
                    void SetCallbackKey(const std::string& _callbackKey);

                    /**
                     * 判断参数 CallbackKey 是否已赋值
                     * @return CallbackKey 是否已赋值
                     * 
                     */
                    bool CallbackKeyHasBeenSet() const;

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
                     * 获取IM admin user ID.
                     * @return AdminUserId IM admin user ID.
                     * 
                     */
                    std::string GetAdminUserId() const;

                    /**
                     * 设置IM admin user ID.
                     * @param _adminUserId IM admin user ID.
                     * 
                     */
                    void SetAdminUserId(const std::string& _adminUserId);

                    /**
                     * 判断参数 AdminUserId 是否已赋值
                     * @return AdminUserId 是否已赋值
                     * 
                     */
                    bool AdminUserIdHasBeenSet() const;

                    /**
                     * 获取IM admin user signature.
                     * @return AdminUserSig IM admin user signature.
                     * 
                     */
                    std::string GetAdminUserSig() const;

                    /**
                     * 设置IM admin user signature.
                     * @param _adminUserSig IM admin user signature.
                     * 
                     */
                    void SetAdminUserSig(const std::string& _adminUserSig);

                    /**
                     * 判断参数 AdminUserSig 是否已赋值
                     * @return AdminUserSig 是否已赋值
                     * 
                     */
                    bool AdminUserSigHasBeenSet() const;

                private:

                    /**
                     * Task type.

recording: Real-time recording.
transcode: Document transcoding.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Bucket name.
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * Region of the bucket.
                     */
                    std::string m_bucketLocation;
                    bool m_bucketLocationHasBeenSet;

                    /**
                     * Resource prefix of the bucket.
                     */
                    std::string m_bucketPrefix;
                    bool m_bucketPrefixHasBeenSet;

                    /**
                     * Destination CDN domain name.
                     */
                    std::string m_resultDomain;
                    bool m_resultDomainHasBeenSet;

                    /**
                     * Callback URL.
                     */
                    std::string m_callback;
                    bool m_callbackHasBeenSet;

                    /**
                     * Callback authentication key.
                     */
                    std::string m_callbackKey;
                    bool m_callbackKeyHasBeenSet;

                    /**
                     * SdkAppId of the whiteboard application.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * IM admin user ID.
                     */
                    std::string m_adminUserId;
                    bool m_adminUserIdHasBeenSet;

                    /**
                     * IM admin user signature.
                     */
                    std::string m_adminUserSig;
                    bool m_adminUserSigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDAPPLICATIONCONFIG_H_
