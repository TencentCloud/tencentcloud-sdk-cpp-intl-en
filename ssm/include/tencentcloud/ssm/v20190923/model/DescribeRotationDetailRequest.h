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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBEROTATIONDETAILREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBEROTATIONDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * DescribeRotationDetail request structure.
                */
                class DescribeRotationDetailRequest : public AbstractModel
                {
                public:
                    DescribeRotationDetailRequest();
                    ~DescribeRotationDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the name of the credential for which to get the credential rotation details.
                     * @return SecretName Specifies the name of the credential for which to get the credential rotation details.
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置Specifies the name of the credential for which to get the credential rotation details.
                     * @param _secretName Specifies the name of the credential for which to get the credential rotation details.
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                private:

                    /**
                     * Specifies the name of the credential for which to get the credential rotation details.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBEROTATIONDETAILREQUEST_H_
