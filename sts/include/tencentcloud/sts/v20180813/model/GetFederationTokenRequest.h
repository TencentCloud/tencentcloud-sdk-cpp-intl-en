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

#ifndef TENCENTCLOUD_STS_V20180813_MODEL_GETFEDERATIONTOKENREQUEST_H_
#define TENCENTCLOUD_STS_V20180813_MODEL_GETFEDERATIONTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sts
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * GetFederationToken request structure.
                */
                class GetFederationTokenRequest : public AbstractModel
                {
                public:
                    GetFederationTokenRequest();
                    ~GetFederationTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The customizable name of the caller, consisting of letters
                     * @return Name The customizable name of the caller, consisting of letters
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The customizable name of the caller, consisting of letters
                     * @param _name The customizable name of the caller, consisting of letters
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

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
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置Policy description
Note:
1. The policy needs to be URL-encoded (if you request a TencentCloud API through the GET method, all parameters must be URL-encoded again in accordance with [Signature v3](https://intl.cloud.tencent.com/document/api/598/33159?from_cn_redirect=1#1.-.E6.8B.BC.E6.8E.A5.E8.A7.84.E8.8C.83.E8.AF.B7.E6.B1.82.E4.B8.B2) before the request is sent).
2. For the policy syntax, please see CAM's [Syntax Logic](https://intl.cloud.tencent.com/document/product/598/10603?from_cn_redirect=1).
3. The policy cannot contain the `principal` element.
                     * @param _policy Policy description
Note:
1. The policy needs to be URL-encoded (if you request a TencentCloud API through the GET method, all parameters must be URL-encoded again in accordance with [Signature v3](https://intl.cloud.tencent.com/document/api/598/33159?from_cn_redirect=1#1.-.E6.8B.BC.E6.8E.A5.E8.A7.84.E8.8C.83.E8.AF.B7.E6.B1.82.E4.B8.B2) before the request is sent).
2. For the policy syntax, please see CAM's [Syntax Logic](https://intl.cloud.tencent.com/document/product/598/10603?from_cn_redirect=1).
3. The policy cannot contain the `principal` element.
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
                     * 获取The validity period of temporary credentials in seconds. Default value: 1,800s. Maximum value for a root account: 7,200s. Maximum value for a sub-account: 129,600s.
                     * @return DurationSeconds The validity period of temporary credentials in seconds. Default value: 1,800s. Maximum value for a root account: 7,200s. Maximum value for a sub-account: 129,600s.
                     * 
                     */
                    uint64_t GetDurationSeconds() const;

                    /**
                     * 设置The validity period of temporary credentials in seconds. Default value: 1,800s. Maximum value for a root account: 7,200s. Maximum value for a sub-account: 129,600s.
                     * @param _durationSeconds The validity period of temporary credentials in seconds. Default value: 1,800s. Maximum value for a root account: 7,200s. Maximum value for a sub-account: 129,600s.
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
                     * The customizable name of the caller, consisting of letters
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

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
                     * The validity period of temporary credentials in seconds. Default value: 1,800s. Maximum value for a root account: 7,200s. Maximum value for a sub-account: 129,600s.
                     */
                    uint64_t m_durationSeconds;
                    bool m_durationSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_STS_V20180813_MODEL_GETFEDERATIONTOKENREQUEST_H_
