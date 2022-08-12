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

#ifndef TENCENTCLOUD_STS_V20180813_MODEL_ASSUMEROLEREQUEST_H_
#define TENCENTCLOUD_STS_V20180813_MODEL_ASSUMEROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sts/v20180813/model/Tag.h>


namespace TencentCloud
{
    namespace Sts
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * AssumeRole request structure.
                */
                class AssumeRoleRequest : public AbstractModel
                {
                public:
                    AssumeRoleRequest();
                    ~AssumeRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource descriptions of a role, which can be obtained by clicking the role name in the [CAM console](https://console.cloud.tencent.com/cam/role).
General role:
qcs::cam::uin/12345678:role/4611686018427397919, qcs::cam::uin/12345678:roleName/testRoleName
Service role:
qcs::cam::uin/12345678:role/tencentcloudServiceRole/4611686018427397920, qcs::cam::uin/12345678:role/tencentcloudServiceRoleName/testServiceRoleName
                     * @return RoleArn Resource descriptions of a role, which can be obtained by clicking the role name in the [CAM console](https://console.cloud.tencent.com/cam/role).
General role:
qcs::cam::uin/12345678:role/4611686018427397919, qcs::cam::uin/12345678:roleName/testRoleName
Service role:
qcs::cam::uin/12345678:role/tencentcloudServiceRole/4611686018427397920, qcs::cam::uin/12345678:role/tencentcloudServiceRoleName/testServiceRoleName
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置Resource descriptions of a role, which can be obtained by clicking the role name in the [CAM console](https://console.cloud.tencent.com/cam/role).
General role:
qcs::cam::uin/12345678:role/4611686018427397919, qcs::cam::uin/12345678:roleName/testRoleName
Service role:
qcs::cam::uin/12345678:role/tencentcloudServiceRole/4611686018427397920, qcs::cam::uin/12345678:role/tencentcloudServiceRoleName/testServiceRoleName
                     * @param RoleArn Resource descriptions of a role, which can be obtained by clicking the role name in the [CAM console](https://console.cloud.tencent.com/cam/role).
General role:
qcs::cam::uin/12345678:role/4611686018427397919, qcs::cam::uin/12345678:roleName/testRoleName
Service role:
qcs::cam::uin/12345678:role/tencentcloudServiceRole/4611686018427397920, qcs::cam::uin/12345678:role/tencentcloudServiceRoleName/testServiceRoleName
                     */
                    void SetRoleArn(const std::string& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取User-defined temporary session name.
It can contain 2-128 letters, digits, and symbols (=,.@_-). Regex: [\w+=,.@_-]*
                     * @return RoleSessionName User-defined temporary session name.
It can contain 2-128 letters, digits, and symbols (=,.@_-). Regex: [\w+=,.@_-]*
                     */
                    std::string GetRoleSessionName() const;

                    /**
                     * 设置User-defined temporary session name.
It can contain 2-128 letters, digits, and symbols (=,.@_-). Regex: [\w+=,.@_-]*
                     * @param RoleSessionName User-defined temporary session name.
It can contain 2-128 letters, digits, and symbols (=,.@_-). Regex: [\w+=,.@_-]*
                     */
                    void SetRoleSessionName(const std::string& _roleSessionName);

                    /**
                     * 判断参数 RoleSessionName 是否已赋值
                     * @return RoleSessionName 是否已赋值
                     */
                    bool RoleSessionNameHasBeenSet() const;

                    /**
                     * 获取Specifies the validity period of credentials in seconds. Default value: 7200. Maximum value: 43200
                     * @return DurationSeconds Specifies the validity period of credentials in seconds. Default value: 7200. Maximum value: 43200
                     */
                    uint64_t GetDurationSeconds() const;

                    /**
                     * 设置Specifies the validity period of credentials in seconds. Default value: 7200. Maximum value: 43200
                     * @param DurationSeconds Specifies the validity period of credentials in seconds. Default value: 7200. Maximum value: 43200
                     */
                    void SetDurationSeconds(const uint64_t& _durationSeconds);

                    /**
                     * 判断参数 DurationSeconds 是否已赋值
                     * @return DurationSeconds 是否已赋值
                     */
                    bool DurationSecondsHasBeenSet() const;

                    /**
                     * 获取Policy description
Note:
1. The policy needs to be URL-encoded (if you request a TencentCloud API through the GET method, all parameters must be URL-encoded again in accordance with [Signature v3](https://intl.cloud.tencent.com/document/api/598/33159?from_cn_redirect=1#1.-.E6.8B.BC.E6.8E.A5.E8.A7.84.E8.8C.83.E8.AF.B7.E6.B1.82.E4.B8.B2) before the request is sent).
2. For the policy syntax, please see CAM's [Syntax Logic](https://intl.cloud.tencent.com/document/product/598/10603?from_cn_redirect=1).
3. The policy cannot contain the `principal` element.
                     * @return Policy Policy description
Note:
1. The policy needs to be URL-encoded (if you request a TencentCloud API through the GET method, all parameters must be URL-encoded again in accordance with [Signature v3](https://intl.cloud.tencent.com/document/api/598/33159?from_cn_redirect=1#1.-.E6.8B.BC.E6.8E.A5.E8.A7.84.E8.8C.83.E8.AF.B7.E6.B1.82.E4.B8.B2) before the request is sent).
2. For the policy syntax, please see CAM's [Syntax Logic](https://intl.cloud.tencent.com/document/product/598/10603?from_cn_redirect=1).
3. The policy cannot contain the `principal` element.
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置Policy description
Note:
1. The policy needs to be URL-encoded (if you request a TencentCloud API through the GET method, all parameters must be URL-encoded again in accordance with [Signature v3](https://intl.cloud.tencent.com/document/api/598/33159?from_cn_redirect=1#1.-.E6.8B.BC.E6.8E.A5.E8.A7.84.E8.8C.83.E8.AF.B7.E6.B1.82.E4.B8.B2) before the request is sent).
2. For the policy syntax, please see CAM's [Syntax Logic](https://intl.cloud.tencent.com/document/product/598/10603?from_cn_redirect=1).
3. The policy cannot contain the `principal` element.
                     * @param Policy Policy description
Note:
1. The policy needs to be URL-encoded (if you request a TencentCloud API through the GET method, all parameters must be URL-encoded again in accordance with [Signature v3](https://intl.cloud.tencent.com/document/api/598/33159?from_cn_redirect=1#1.-.E6.8B.BC.E6.8E.A5.E8.A7.84.E8.8C.83.E8.AF.B7.E6.B1.82.E4.B8.B2) before the request is sent).
2. For the policy syntax, please see CAM's [Syntax Logic](https://intl.cloud.tencent.com/document/product/598/10603?from_cn_redirect=1).
3. The policy cannot contain the `principal` element.
                     */
                    void SetPolicy(const std::string& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取External role ID, which can be obtained by clicking the role name in the [CAM console](https://console.cloud.tencent.com/cam/role).
It can contain 2-128 letters, digits, and symbols (=,.@:/-). Regex: [\w+=,.@:\/-]*
                     * @return ExternalId External role ID, which can be obtained by clicking the role name in the [CAM console](https://console.cloud.tencent.com/cam/role).
It can contain 2-128 letters, digits, and symbols (=,.@:/-). Regex: [\w+=,.@:\/-]*
                     */
                    std::string GetExternalId() const;

                    /**
                     * 设置External role ID, which can be obtained by clicking the role name in the [CAM console](https://console.cloud.tencent.com/cam/role).
It can contain 2-128 letters, digits, and symbols (=,.@:/-). Regex: [\w+=,.@:\/-]*
                     * @param ExternalId External role ID, which can be obtained by clicking the role name in the [CAM console](https://console.cloud.tencent.com/cam/role).
It can contain 2-128 letters, digits, and symbols (=,.@:/-). Regex: [\w+=,.@:\/-]*
                     */
                    void SetExternalId(const std::string& _externalId);

                    /**
                     * 判断参数 ExternalId 是否已赋值
                     * @return ExternalId 是否已赋值
                     */
                    bool ExternalIdHasBeenSet() const;

                    /**
                     * 获取List of session tags. Up to 50 tags are allowed. The tag keys can not duplicate.
                     * @return Tags List of session tags. Up to 50 tags are allowed. The tag keys can not duplicate.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of session tags. Up to 50 tags are allowed. The tag keys can not duplicate.
                     * @param Tags List of session tags. Up to 50 tags are allowed. The tag keys can not duplicate.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取UIN of the initiator
                     * @return SourceIdentity UIN of the initiator
                     */
                    std::string GetSourceIdentity() const;

                    /**
                     * 设置UIN of the initiator
                     * @param SourceIdentity UIN of the initiator
                     */
                    void SetSourceIdentity(const std::string& _sourceIdentity);

                    /**
                     * 判断参数 SourceIdentity 是否已赋值
                     * @return SourceIdentity 是否已赋值
                     */
                    bool SourceIdentityHasBeenSet() const;

                private:

                    /**
                     * Resource descriptions of a role, which can be obtained by clicking the role name in the [CAM console](https://console.cloud.tencent.com/cam/role).
General role:
qcs::cam::uin/12345678:role/4611686018427397919, qcs::cam::uin/12345678:roleName/testRoleName
Service role:
qcs::cam::uin/12345678:role/tencentcloudServiceRole/4611686018427397920, qcs::cam::uin/12345678:role/tencentcloudServiceRoleName/testServiceRoleName
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * User-defined temporary session name.
It can contain 2-128 letters, digits, and symbols (=,.@_-). Regex: [\w+=,.@_-]*
                     */
                    std::string m_roleSessionName;
                    bool m_roleSessionNameHasBeenSet;

                    /**
                     * Specifies the validity period of credentials in seconds. Default value: 7200. Maximum value: 43200
                     */
                    uint64_t m_durationSeconds;
                    bool m_durationSecondsHasBeenSet;

                    /**
                     * Policy description
Note:
1. The policy needs to be URL-encoded (if you request a TencentCloud API through the GET method, all parameters must be URL-encoded again in accordance with [Signature v3](https://intl.cloud.tencent.com/document/api/598/33159?from_cn_redirect=1#1.-.E6.8B.BC.E6.8E.A5.E8.A7.84.E8.8C.83.E8.AF.B7.E6.B1.82.E4.B8.B2) before the request is sent).
2. For the policy syntax, please see CAM's [Syntax Logic](https://intl.cloud.tencent.com/document/product/598/10603?from_cn_redirect=1).
3. The policy cannot contain the `principal` element.
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * External role ID, which can be obtained by clicking the role name in the [CAM console](https://console.cloud.tencent.com/cam/role).
It can contain 2-128 letters, digits, and symbols (=,.@:/-). Regex: [\w+=,.@:\/-]*
                     */
                    std::string m_externalId;
                    bool m_externalIdHasBeenSet;

                    /**
                     * List of session tags. Up to 50 tags are allowed. The tag keys can not duplicate.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * UIN of the initiator
                     */
                    std::string m_sourceIdentity;
                    bool m_sourceIdentityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_STS_V20180813_MODEL_ASSUMEROLEREQUEST_H_
