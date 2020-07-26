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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ENABLEAPIKEYREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ENABLEAPIKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * EnableApiKey request structure.
                */
                class EnableApiKeyRequest : public AbstractModel
                {
                public:
                    EnableApiKeyRequest();
                    ~EnableApiKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the key to be enabled.
                     * @return AccessKeyId ID of the key to be enabled.
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置ID of the key to be enabled.
                     * @param AccessKeyId ID of the key to be enabled.
                     */
                    void SetAccessKeyId(const std::string& _accessKeyId);

                    /**
                     * 判断参数 AccessKeyId 是否已赋值
                     * @return AccessKeyId 是否已赋值
                     */
                    bool AccessKeyIdHasBeenSet() const;

                private:

                    /**
                     * ID of the key to be enabled.
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ENABLEAPIKEYREQUEST_H_
