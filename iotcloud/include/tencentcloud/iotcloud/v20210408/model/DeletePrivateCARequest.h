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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DELETEPRIVATECAREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DELETEPRIVATECAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DeletePrivateCA request structure.
                */
                class DeletePrivateCARequest : public AbstractModel
                {
                public:
                    DeletePrivateCARequest();
                    ~DeletePrivateCARequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Private CA certificate name
                     * @return CertName Private CA certificate name
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置Private CA certificate name
                     * @param _certName Private CA certificate name
                     * 
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                private:

                    /**
                     * Private CA certificate name
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DELETEPRIVATECAREQUEST_H_
