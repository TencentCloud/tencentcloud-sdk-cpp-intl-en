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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_SECURITYPOLICY_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_SECURITYPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * Security policy
                */
                class SecurityPolicy : public AbstractModel
                {
                public:
                    SecurityPolicy();
                    ~SecurityPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy index
                     * @return PolicyIndex Policy index
                     */
                    int64_t GetPolicyIndex() const;

                    /**
                     * 设置Policy index
                     * @param PolicyIndex Policy index
                     */
                    void SetPolicyIndex(const int64_t& _policyIndex);

                    /**
                     * 判断参数 PolicyIndex 是否已赋值
                     * @return PolicyIndex 是否已赋值
                     */
                    bool PolicyIndexHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Description Remarks
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Remarks
                     * @param Description Remarks
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取The public network IP address of the access source
                     * @return CidrBlock The public network IP address of the access source
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置The public network IP address of the access source
                     * @param CidrBlock The public network IP address of the access source
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取The version of the security policy
                     * @return PolicyVersion The version of the security policy
                     */
                    std::string GetPolicyVersion() const;

                    /**
                     * 设置The version of the security policy
                     * @param PolicyVersion The version of the security policy
                     */
                    void SetPolicyVersion(const std::string& _policyVersion);

                    /**
                     * 判断参数 PolicyVersion 是否已赋值
                     * @return PolicyVersion 是否已赋值
                     */
                    bool PolicyVersionHasBeenSet() const;

                private:

                    /**
                     * Policy index
                     */
                    int64_t m_policyIndex;
                    bool m_policyIndexHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The public network IP address of the access source
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * The version of the security policy
                     */
                    std::string m_policyVersion;
                    bool m_policyVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_SECURITYPOLICY_H_
