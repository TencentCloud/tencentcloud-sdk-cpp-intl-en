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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_MODIFYCERTIFICATEPROJECTRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_MODIFYCERTIFICATEPROJECTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * ModifyCertificateProject response structure.
                */
                class ModifyCertificateProjectResponse : public AbstractModel
                {
                public:
                    ModifyCertificateProjectResponse();
                    ~ModifyCertificateProjectResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of certificates whose projects were modified successfully
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SuccessCertificates List of certificates whose projects were modified successfully
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSuccessCertificates() const;

                    /**
                     * 判断参数 SuccessCertificates 是否已赋值
                     * @return SuccessCertificates 是否已赋值
                     * 
                     */
                    bool SuccessCertificatesHasBeenSet() const;

                    /**
                     * 获取List of certificates whose projects failed to be modified
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FailCertificates List of certificates whose projects failed to be modified
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetFailCertificates() const;

                    /**
                     * 判断参数 FailCertificates 是否已赋值
                     * @return FailCertificates 是否已赋值
                     * 
                     */
                    bool FailCertificatesHasBeenSet() const;

                private:

                    /**
                     * List of certificates whose projects were modified successfully
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_successCertificates;
                    bool m_successCertificatesHasBeenSet;

                    /**
                     * List of certificates whose projects failed to be modified
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_failCertificates;
                    bool m_failCertificatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_MODIFYCERTIFICATEPROJECTRESPONSE_H_
