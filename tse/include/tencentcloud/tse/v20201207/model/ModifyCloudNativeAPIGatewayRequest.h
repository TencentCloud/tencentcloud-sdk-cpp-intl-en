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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * ModifyCloudNativeAPIGateway request structure.
                */
                class ModifyCloudNativeAPIGatewayRequest : public AbstractModel
                {
                public:
                    ModifyCloudNativeAPIGatewayRequest();
                    ~ModifyCloudNativeAPIGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud native API gateway instance ID.
                     * @return GatewayId Cloud native API gateway instance ID.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Cloud native API gateway instance ID.
                     * @param _gatewayId Cloud native API gateway instance ID.
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Cloud Native API Gateway name, supports up to 60 characters.
                     * @return Name Cloud Native API Gateway name, supports up to 60 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Cloud Native API Gateway name, supports up to 60 characters.
                     * @param _name Cloud Native API Gateway name, supports up to 60 characters.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Cloud native API gateway description, supports up to 120 characters.
                     * @return Description Cloud native API gateway description, supports up to 120 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Cloud native API gateway description, supports up to 120 characters.
                     * @param _description Cloud native API gateway description, supports up to 120 characters.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Whether CLS log is enabled. The value can only be true temporarily, meaning it can only be changed from disabled to enabled.
                     * @return EnableCls Whether CLS log is enabled. The value can only be true temporarily, meaning it can only be changed from disabled to enabled.
                     * 
                     */
                    bool GetEnableCls() const;

                    /**
                     * 设置Whether CLS log is enabled. The value can only be true temporarily, meaning it can only be changed from disabled to enabled.
                     * @param _enableCls Whether CLS log is enabled. The value can only be true temporarily, meaning it can only be changed from disabled to enabled.
                     * 
                     */
                    void SetEnableCls(const bool& _enableCls);

                    /**
                     * 判断参数 EnableCls 是否已赋值
                     * @return EnableCls 是否已赋值
                     * 
                     */
                    bool EnableClsHasBeenSet() const;

                    /**
                     * 获取Public network billing mode. Option values: BANDWIDTH | TRAFFIC, which means billing by bandwidth or by traffic.
                     * @return InternetPayMode Public network billing mode. Option values: BANDWIDTH | TRAFFIC, which means billing by bandwidth or by traffic.
                     * 
                     */
                    std::string GetInternetPayMode() const;

                    /**
                     * 设置Public network billing mode. Option values: BANDWIDTH | TRAFFIC, which means billing by bandwidth or by traffic.
                     * @param _internetPayMode Public network billing mode. Option values: BANDWIDTH | TRAFFIC, which means billing by bandwidth or by traffic.
                     * 
                     */
                    void SetInternetPayMode(const std::string& _internetPayMode);

                    /**
                     * 判断参数 InternetPayMode 是否已赋值
                     * @return InternetPayMode 是否已赋值
                     * 
                     */
                    bool InternetPayModeHasBeenSet() const;

                    /**
                     * 获取Enable instance deletion protection, default false
                     * @return DeleteProtect Enable instance deletion protection, default false
                     * 
                     */
                    bool GetDeleteProtect() const;

                    /**
                     * 设置Enable instance deletion protection, default false
                     * @param _deleteProtect Enable instance deletion protection, default false
                     * 
                     */
                    void SetDeleteProtect(const bool& _deleteProtect);

                    /**
                     * 判断参数 DeleteProtect 是否已赋值
                     * @return DeleteProtect 是否已赋值
                     * 
                     */
                    bool DeleteProtectHasBeenSet() const;

                private:

                    /**
                     * Cloud native API gateway instance ID.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Cloud Native API Gateway name, supports up to 60 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Cloud native API gateway description, supports up to 120 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether CLS log is enabled. The value can only be true temporarily, meaning it can only be changed from disabled to enabled.
                     */
                    bool m_enableCls;
                    bool m_enableClsHasBeenSet;

                    /**
                     * Public network billing mode. Option values: BANDWIDTH | TRAFFIC, which means billing by bandwidth or by traffic.
                     */
                    std::string m_internetPayMode;
                    bool m_internetPayModeHasBeenSet;

                    /**
                     * Enable instance deletion protection, default false
                     */
                    bool m_deleteProtect;
                    bool m_deleteProtectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYREQUEST_H_
