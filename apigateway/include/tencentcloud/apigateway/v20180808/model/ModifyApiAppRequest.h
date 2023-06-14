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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIAPPREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIAPPREQUEST_H_

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
                * ModifyApiApp request structure.
                */
                class ModifyApiAppRequest : public AbstractModel
                {
                public:
                    ModifyApiAppRequest();
                    ~ModifyApiAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique application ID.
                     * @return ApiAppId Unique application ID.
                     * 
                     */
                    std::string GetApiAppId() const;

                    /**
                     * 设置Unique application ID.
                     * @param _apiAppId Unique application ID.
                     * 
                     */
                    void SetApiAppId(const std::string& _apiAppId);

                    /**
                     * 判断参数 ApiAppId 是否已赋值
                     * @return ApiAppId 是否已赋值
                     * 
                     */
                    bool ApiAppIdHasBeenSet() const;

                    /**
                     * 获取Modified application name
                     * @return ApiAppName Modified application name
                     * 
                     */
                    std::string GetApiAppName() const;

                    /**
                     * 设置Modified application name
                     * @param _apiAppName Modified application name
                     * 
                     */
                    void SetApiAppName(const std::string& _apiAppName);

                    /**
                     * 判断参数 ApiAppName 是否已赋值
                     * @return ApiAppName 是否已赋值
                     * 
                     */
                    bool ApiAppNameHasBeenSet() const;

                    /**
                     * 获取Modified application description
                     * @return ApiAppDesc Modified application description
                     * 
                     */
                    std::string GetApiAppDesc() const;

                    /**
                     * 设置Modified application description
                     * @param _apiAppDesc Modified application description
                     * 
                     */
                    void SetApiAppDesc(const std::string& _apiAppDesc);

                    /**
                     * 判断参数 ApiAppDesc 是否已赋值
                     * @return ApiAppDesc 是否已赋值
                     * 
                     */
                    bool ApiAppDescHasBeenSet() const;

                private:

                    /**
                     * Unique application ID.
                     */
                    std::string m_apiAppId;
                    bool m_apiAppIdHasBeenSet;

                    /**
                     * Modified application name
                     */
                    std::string m_apiAppName;
                    bool m_apiAppNameHasBeenSet;

                    /**
                     * Modified application description
                     */
                    std::string m_apiAppDesc;
                    bool m_apiAppDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIAPPREQUEST_H_
