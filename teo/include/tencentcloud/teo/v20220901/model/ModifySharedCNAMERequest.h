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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSHAREDCNAMEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSHAREDCNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IPSSLSetting.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifySharedCNAME request structure.
                */
                class ModifySharedCNAMERequest : public AbstractModel
                {
                public:
                    ModifySharedCNAMERequest();
                    ~ModifySharedCNAMERequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Shared CNAME associated site ID.
                     * @return ZoneId Shared CNAME associated site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Shared CNAME associated site ID.
                     * @param _zoneId Shared CNAME associated site ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Shared CNAME.
                     * @return SharedCNAME Shared CNAME.
                     * 
                     */
                    std::string GetSharedCNAME() const;

                    /**
                     * 设置Shared CNAME.
                     * @param _sharedCNAME Shared CNAME.
                     * 
                     */
                    void SetSharedCNAME(const std::string& _sharedCNAME);

                    /**
                     * 判断参数 SharedCNAME 是否已赋值
                     * @return SharedCNAME 是否已赋值
                     * 
                     */
                    bool SharedCNAMEHasBeenSet() const;

                    /**
                     * 获取Enter the adjusted description.
                     * @return Description Enter the adjusted description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Enter the adjusted description.
                     * @param _description Enter the adjusted description.
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
                     * 获取Set the IP SSL message of the shared CNAME with IP SSL type.
                     * @return IPSSLSetting Set the IP SSL message of the shared CNAME with IP SSL type.
                     * 
                     */
                    IPSSLSetting GetIPSSLSetting() const;

                    /**
                     * 设置Set the IP SSL message of the shared CNAME with IP SSL type.
                     * @param _iPSSLSetting Set the IP SSL message of the shared CNAME with IP SSL type.
                     * 
                     */
                    void SetIPSSLSetting(const IPSSLSetting& _iPSSLSetting);

                    /**
                     * 判断参数 IPSSLSetting 是否已赋值
                     * @return IPSSLSetting 是否已赋值
                     * 
                     */
                    bool IPSSLSettingHasBeenSet() const;

                private:

                    /**
                     * Shared CNAME associated site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Shared CNAME.
                     */
                    std::string m_sharedCNAME;
                    bool m_sharedCNAMEHasBeenSet;

                    /**
                     * Enter the adjusted description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Set the IP SSL message of the shared CNAME with IP SSL type.
                     */
                    IPSSLSetting m_iPSSLSetting;
                    bool m_iPSSLSettingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSHAREDCNAMEREQUEST_H_
