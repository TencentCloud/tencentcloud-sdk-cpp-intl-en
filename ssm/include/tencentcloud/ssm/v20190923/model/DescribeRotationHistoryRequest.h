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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBEROTATIONHISTORYREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBEROTATIONHISTORYREQUEST_H_

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
                * DescribeRotationHistory request structure.
                */
                class DescribeRotationHistoryRequest : public AbstractModel
                {
                public:
                    DescribeRotationHistoryRequest();
                    ~DescribeRotationHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the name of the credential for which to get the credential rotation records.
                     * @return SecretName Specifies the name of the credential for which to get the credential rotation records.
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置Specifies the name of the credential for which to get the credential rotation records.
                     * @param _secretName Specifies the name of the credential for which to get the credential rotation records.
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
                     * Specifies the name of the credential for which to get the credential rotation records.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBEROTATIONHISTORYREQUEST_H_
