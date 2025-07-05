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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DELETECCGEOIPBLOCKCONFIGREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DELETECCGEOIPBLOCKCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/CcGeoIPBlockConfig.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DeleteCcGeoIPBlockConfig request structure.
                */
                class DeleteCcGeoIPBlockConfigRequest : public AbstractModel
                {
                public:
                    DeleteCcGeoIPBlockConfigRequest();
                    ~DeleteCcGeoIPBlockConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Region blocking configuration. The configuration ID cannot be empty when you set this parameter.
                     * @return CcGeoIPBlockConfig Region blocking configuration. The configuration ID cannot be empty when you set this parameter.
                     * 
                     */
                    CcGeoIPBlockConfig GetCcGeoIPBlockConfig() const;

                    /**
                     * 设置Region blocking configuration. The configuration ID cannot be empty when you set this parameter.
                     * @param _ccGeoIPBlockConfig Region blocking configuration. The configuration ID cannot be empty when you set this parameter.
                     * 
                     */
                    void SetCcGeoIPBlockConfig(const CcGeoIPBlockConfig& _ccGeoIPBlockConfig);

                    /**
                     * 判断参数 CcGeoIPBlockConfig 是否已赋值
                     * @return CcGeoIPBlockConfig 是否已赋值
                     * 
                     */
                    bool CcGeoIPBlockConfigHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Region blocking configuration. The configuration ID cannot be empty when you set this parameter.
                     */
                    CcGeoIPBlockConfig m_ccGeoIPBlockConfig;
                    bool m_ccGeoIPBlockConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DELETECCGEOIPBLOCKCONFIGREQUEST_H_
