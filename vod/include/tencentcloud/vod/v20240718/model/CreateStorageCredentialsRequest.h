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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_CREATESTORAGECREDENTIALSREQUEST_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_CREATESTORAGECREDENTIALSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * CreateStorageCredentials request structure.
                */
                class CreateStorageCredentialsRequest : public AbstractModel
                {
                public:
                    CreateStorageCredentialsRequest();
                    ~CreateStorageCredentialsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     * @return SubAppId <b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     * @param _subAppId <b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取The policy string serialized by URL Encode is used as the input parameter Policy. The server will URL Decode the Policy value and grant temporary access credentials according to the parsed policy. Please pass in parameters according to the specification.
Note:
1.The policy syntax refers to [Cloud Access Management](/document/product/598/10603).
2.The policy cannot contain the principal element.
3.The policy actions include: 
<li>name/vod:ListObjects;</li>
<li>name/vod:ListObjectsV2;</li>
<li>name/vod:HeadObject;</li>
<li>name/vod:PutObject;</li>
<li>name/vod:ListParts;</li>
<li>name/vod:PostObject;</li>
<li>name/vod:CreateMultipartUpload;</li>
<li>name/vod:UploadPart;</li>
<li>name/vod:CompleteMultipartUpload;</li>
<li>name/vod:AbortMultipartUpload;</li>
<li>name/vod:ListMultipartUploads;</li>
<li>name/vod:CopyObject;</li>
<li>name/vod:RestoreObject;</li>
<li>name/vod:DeleteObjects;</li>
<li>name/vod:DeleteObject;</li>
<li>name/vod:UploadPartCopy.</li>4.The resource format of the policy is `qcs::vod:[region]:uid/[AppID]:prefix//[SubAppId]/[BucketId]/[Path]`, where AppID, SubAppId, BucketId and Path need to be filled in as required.

                     * @return Policy The policy string serialized by URL Encode is used as the input parameter Policy. The server will URL Decode the Policy value and grant temporary access credentials according to the parsed policy. Please pass in parameters according to the specification.
Note:
1.The policy syntax refers to [Cloud Access Management](/document/product/598/10603).
2.The policy cannot contain the principal element.
3.The policy actions include: 
<li>name/vod:ListObjects;</li>
<li>name/vod:ListObjectsV2;</li>
<li>name/vod:HeadObject;</li>
<li>name/vod:PutObject;</li>
<li>name/vod:ListParts;</li>
<li>name/vod:PostObject;</li>
<li>name/vod:CreateMultipartUpload;</li>
<li>name/vod:UploadPart;</li>
<li>name/vod:CompleteMultipartUpload;</li>
<li>name/vod:AbortMultipartUpload;</li>
<li>name/vod:ListMultipartUploads;</li>
<li>name/vod:CopyObject;</li>
<li>name/vod:RestoreObject;</li>
<li>name/vod:DeleteObjects;</li>
<li>name/vod:DeleteObject;</li>
<li>name/vod:UploadPartCopy.</li>4.The resource format of the policy is `qcs::vod:[region]:uid/[AppID]:prefix//[SubAppId]/[BucketId]/[Path]`, where AppID, SubAppId, BucketId and Path need to be filled in as required.

                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置The policy string serialized by URL Encode is used as the input parameter Policy. The server will URL Decode the Policy value and grant temporary access credentials according to the parsed policy. Please pass in parameters according to the specification.
Note:
1.The policy syntax refers to [Cloud Access Management](/document/product/598/10603).
2.The policy cannot contain the principal element.
3.The policy actions include: 
<li>name/vod:ListObjects;</li>
<li>name/vod:ListObjectsV2;</li>
<li>name/vod:HeadObject;</li>
<li>name/vod:PutObject;</li>
<li>name/vod:ListParts;</li>
<li>name/vod:PostObject;</li>
<li>name/vod:CreateMultipartUpload;</li>
<li>name/vod:UploadPart;</li>
<li>name/vod:CompleteMultipartUpload;</li>
<li>name/vod:AbortMultipartUpload;</li>
<li>name/vod:ListMultipartUploads;</li>
<li>name/vod:CopyObject;</li>
<li>name/vod:RestoreObject;</li>
<li>name/vod:DeleteObjects;</li>
<li>name/vod:DeleteObject;</li>
<li>name/vod:UploadPartCopy.</li>4.The resource format of the policy is `qcs::vod:[region]:uid/[AppID]:prefix//[SubAppId]/[BucketId]/[Path]`, where AppID, SubAppId, BucketId and Path need to be filled in as required.

                     * @param _policy The policy string serialized by URL Encode is used as the input parameter Policy. The server will URL Decode the Policy value and grant temporary access credentials according to the parsed policy. Please pass in parameters according to the specification.
Note:
1.The policy syntax refers to [Cloud Access Management](/document/product/598/10603).
2.The policy cannot contain the principal element.
3.The policy actions include: 
<li>name/vod:ListObjects;</li>
<li>name/vod:ListObjectsV2;</li>
<li>name/vod:HeadObject;</li>
<li>name/vod:PutObject;</li>
<li>name/vod:ListParts;</li>
<li>name/vod:PostObject;</li>
<li>name/vod:CreateMultipartUpload;</li>
<li>name/vod:UploadPart;</li>
<li>name/vod:CompleteMultipartUpload;</li>
<li>name/vod:AbortMultipartUpload;</li>
<li>name/vod:ListMultipartUploads;</li>
<li>name/vod:CopyObject;</li>
<li>name/vod:RestoreObject;</li>
<li>name/vod:DeleteObjects;</li>
<li>name/vod:DeleteObject;</li>
<li>name/vod:UploadPartCopy.</li>4.The resource format of the policy is `qcs::vod:[region]:uid/[AppID]:prefix//[SubAppId]/[BucketId]/[Path]`, where AppID, SubAppId, BucketId and Path need to be filled in as required.

                     * 
                     */
                    void SetPolicy(const std::string& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取Specifies the validity period of credentials in seconds. The default value is 1800 seconds and the maximum value is 129600 seconds.
                     * @return DurationSeconds Specifies the validity period of credentials in seconds. The default value is 1800 seconds and the maximum value is 129600 seconds.
                     * 
                     */
                    uint64_t GetDurationSeconds() const;

                    /**
                     * 设置Specifies the validity period of credentials in seconds. The default value is 1800 seconds and the maximum value is 129600 seconds.
                     * @param _durationSeconds Specifies the validity period of credentials in seconds. The default value is 1800 seconds and the maximum value is 129600 seconds.
                     * 
                     */
                    void SetDurationSeconds(const uint64_t& _durationSeconds);

                    /**
                     * 判断参数 DurationSeconds 是否已赋值
                     * @return DurationSeconds 是否已赋值
                     * 
                     */
                    bool DurationSecondsHasBeenSet() const;

                private:

                    /**
                     * <b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * The policy string serialized by URL Encode is used as the input parameter Policy. The server will URL Decode the Policy value and grant temporary access credentials according to the parsed policy. Please pass in parameters according to the specification.
Note:
1.The policy syntax refers to [Cloud Access Management](/document/product/598/10603).
2.The policy cannot contain the principal element.
3.The policy actions include: 
<li>name/vod:ListObjects;</li>
<li>name/vod:ListObjectsV2;</li>
<li>name/vod:HeadObject;</li>
<li>name/vod:PutObject;</li>
<li>name/vod:ListParts;</li>
<li>name/vod:PostObject;</li>
<li>name/vod:CreateMultipartUpload;</li>
<li>name/vod:UploadPart;</li>
<li>name/vod:CompleteMultipartUpload;</li>
<li>name/vod:AbortMultipartUpload;</li>
<li>name/vod:ListMultipartUploads;</li>
<li>name/vod:CopyObject;</li>
<li>name/vod:RestoreObject;</li>
<li>name/vod:DeleteObjects;</li>
<li>name/vod:DeleteObject;</li>
<li>name/vod:UploadPartCopy.</li>4.The resource format of the policy is `qcs::vod:[region]:uid/[AppID]:prefix//[SubAppId]/[BucketId]/[Path]`, where AppID, SubAppId, BucketId and Path need to be filled in as required.

                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * Specifies the validity period of credentials in seconds. The default value is 1800 seconds and the maximum value is 129600 seconds.
                     */
                    uint64_t m_durationSeconds;
                    bool m_durationSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_CREATESTORAGECREDENTIALSREQUEST_H_
