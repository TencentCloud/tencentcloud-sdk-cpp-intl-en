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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRIVATECASRESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRIVATECASRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20210408/model/CertInfo.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribePrivateCAs response structure.
                */
                class DescribePrivateCAsResponse : public AbstractModel
                {
                public:
                    DescribePrivateCAsResponse();
                    ~DescribePrivateCAsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of private CA certificates
                     * @return CAs List of private CA certificates
                     * 
                     */
                    std::vector<CertInfo> GetCAs() const;

                    /**
                     * 判断参数 CAs 是否已赋值
                     * @return CAs 是否已赋值
                     * 
                     */
                    bool CAsHasBeenSet() const;

                private:

                    /**
                     * List of private CA certificates
                     */
                    std::vector<CertInfo> m_cAs;
                    bool m_cAsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRIVATECASRESPONSE_H_
