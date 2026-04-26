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
                     * 获取Note:

The policy syntax refers to [CAM's Syntax Logic](https://intl.cloud.tencent.com/document/product/598/10603?from_cn_redirect=1).
The policy cannot contain the principal element.
This parameter needs to be URL-encoded. The server will URL-decode this field and grant temporary access credentials based on the processed policy. Please pass the parameter according to the specification.
                     * @return Policy Note:

The policy syntax refers to [CAM's Syntax Logic](https://intl.cloud.tencent.com/document/product/598/10603?from_cn_redirect=1).
The policy cannot contain the principal element.
This parameter needs to be URL-encoded. The server will URL-decode this field and grant temporary access credentials based on the processed policy. Please pass the parameter according to the specification.
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置Note:

The policy syntax refers to [CAM's Syntax Logic](https://intl.cloud.tencent.com/document/product/598/10603?from_cn_redirect=1).
The policy cannot contain the principal element.
This parameter needs to be URL-encoded. The server will URL-decode this field and grant temporary access credentials based on the processed policy. Please pass the parameter according to the specification.
                     * @param _policy Note:

The policy syntax refers to [CAM's Syntax Logic](https://intl.cloud.tencent.com/document/product/598/10603?from_cn_redirect=1).
The policy cannot contain the principal element.
This parameter needs to be URL-encoded. The server will URL-decode this field and grant temporary access credentials based on the processed policy. Please pass the parameter according to the specification.
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
                     * Note:

The policy syntax refers to [CAM's Syntax Logic](https://intl.cloud.tencent.com/document/product/598/10603?from_cn_redirect=1).
The policy cannot contain the principal element.
This parameter needs to be URL-encoded. The server will URL-decode this field and grant temporary access credentials based on the processed policy. Please pass the parameter according to the specification.
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
