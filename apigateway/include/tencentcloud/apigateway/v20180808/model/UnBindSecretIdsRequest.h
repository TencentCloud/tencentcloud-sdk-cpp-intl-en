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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDSECRETIDSREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDSECRETIDSREQUEST_H_

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
                * UnBindSecretIds request structure.
                */
                class UnBindSecretIdsRequest : public AbstractModel
                {
                public:
                    UnBindSecretIdsRequest();
                    ~UnBindSecretIdsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the usage plan to be unbound.
                     * @return UsagePlanId Unique ID of the usage plan to be unbound.
                     * 
                     */
                    std::string GetUsagePlanId() const;

                    /**
                     * 设置Unique ID of the usage plan to be unbound.
                     * @param _usagePlanId Unique ID of the usage plan to be unbound.
                     * 
                     */
                    void SetUsagePlanId(const std::string& _usagePlanId);

                    /**
                     * 判断参数 UsagePlanId 是否已赋值
                     * @return UsagePlanId 是否已赋值
                     * 
                     */
                    bool UsagePlanIdHasBeenSet() const;

                    /**
                     * 获取Array of IDs of the keys to be unbound.
                     * @return AccessKeyIds Array of IDs of the keys to be unbound.
                     * 
                     */
                    std::vector<std::string> GetAccessKeyIds() const;

                    /**
                     * 设置Array of IDs of the keys to be unbound.
                     * @param _accessKeyIds Array of IDs of the keys to be unbound.
                     * 
                     */
                    void SetAccessKeyIds(const std::vector<std::string>& _accessKeyIds);

                    /**
                     * 判断参数 AccessKeyIds 是否已赋值
                     * @return AccessKeyIds 是否已赋值
                     * 
                     */
                    bool AccessKeyIdsHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the usage plan to be unbound.
                     */
                    std::string m_usagePlanId;
                    bool m_usagePlanIdHasBeenSet;

                    /**
                     * Array of IDs of the keys to be unbound.
                     */
                    std::vector<std::string> m_accessKeyIds;
                    bool m_accessKeyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDSECRETIDSREQUEST_H_
