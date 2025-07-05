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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEPUBLICKEYREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEPUBLICKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DescribePublicKey request structure.
                */
                class DescribePublicKeyRequest : public AbstractModel
                {
                public:
                    DescribePublicKeyRequest();
                    ~DescribePublicKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID, which is globally unique.
                     * @return ApplicationId Application ID, which is globally unique.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID, which is globally unique.
                     * @param _applicationId Application ID, which is globally unique.
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                private:

                    /**
                     * Application ID, which is globally unique.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEPUBLICKEYREQUEST_H_
