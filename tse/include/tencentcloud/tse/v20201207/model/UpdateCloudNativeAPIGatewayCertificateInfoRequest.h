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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_UPDATECLOUDNATIVEAPIGATEWAYCERTIFICATEINFOREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_UPDATECLOUDNATIVEAPIGATEWAYCERTIFICATEINFOREQUEST_H_

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
                * UpdateCloudNativeAPIGatewayCertificateInfo request structure.
                */
                class UpdateCloudNativeAPIGatewayCertificateInfoRequest : public AbstractModel
                {
                public:
                    UpdateCloudNativeAPIGatewayCertificateInfoRequest();
                    ~UpdateCloudNativeAPIGatewayCertificateInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Gateway ID
                     * @return GatewayId Gateway ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway ID
                     * @param _gatewayId Gateway ID
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
                     * 获取Certificate ID.
                     * @return Id Certificate ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Certificate ID.
                     * @param _id Certificate ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Domain name list bound to
                     * @return BindDomains Domain name list bound to
                     * 
                     */
                    std::vector<std::string> GetBindDomains() const;

                    /**
                     * 设置Domain name list bound to
                     * @param _bindDomains Domain name list bound to
                     * 
                     */
                    void SetBindDomains(const std::vector<std::string>& _bindDomains);

                    /**
                     * 判断参数 BindDomains 是否已赋值
                     * @return BindDomains 是否已赋值
                     * 
                     */
                    bool BindDomainsHasBeenSet() const;

                    /**
                     * 获取Certificate Name
                     * @return Name Certificate Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Certificate Name
                     * @param _name Certificate Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Gateway ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Certificate ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Domain name list bound to
                     */
                    std::vector<std::string> m_bindDomains;
                    bool m_bindDomainsHasBeenSet;

                    /**
                     * Certificate Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_UPDATECLOUDNATIVEAPIGATEWAYCERTIFICATEINFOREQUEST_H_
