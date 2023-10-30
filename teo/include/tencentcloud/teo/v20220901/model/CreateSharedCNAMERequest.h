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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATESHAREDCNAMEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATESHAREDCNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateSharedCNAME request structure.
                */
                class CreateSharedCNAMERequest : public AbstractModel
                {
                public:
                    CreateSharedCNAMERequest();
                    ~CreateSharedCNAMERequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the site to which the shared CNAME belongs.	
                     * @return ZoneId ID of the site to which the shared CNAME belongs.	
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site to which the shared CNAME belongs.	
                     * @param _zoneId ID of the site to which the shared CNAME belongs.	
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
                     * 获取Prefix of the shared CNAME. Format: "test-api","test-api.com". Up 50 characters allowed.
The full format of the shared CNAME is: <custom prefix> + <12-bit random string in ZoneId> + "share.eo.dns[0-5].com". For example, if the prefix is "example.com", the created shared CNAME is "example.com.sai2ig51kaa5.share.eo.dnse2.com"
Example: example.com
                     * @return SharedCNAMEPrefix Prefix of the shared CNAME. Format: "test-api","test-api.com". Up 50 characters allowed.
The full format of the shared CNAME is: <custom prefix> + <12-bit random string in ZoneId> + "share.eo.dns[0-5].com". For example, if the prefix is "example.com", the created shared CNAME is "example.com.sai2ig51kaa5.share.eo.dnse2.com"
Example: example.com
                     * 
                     */
                    std::string GetSharedCNAMEPrefix() const;

                    /**
                     * 设置Prefix of the shared CNAME. Format: "test-api","test-api.com". Up 50 characters allowed.
The full format of the shared CNAME is: <custom prefix> + <12-bit random string in ZoneId> + "share.eo.dns[0-5].com". For example, if the prefix is "example.com", the created shared CNAME is "example.com.sai2ig51kaa5.share.eo.dnse2.com"
Example: example.com
                     * @param _sharedCNAMEPrefix Prefix of the shared CNAME. Format: "test-api","test-api.com". Up 50 characters allowed.
The full format of the shared CNAME is: <custom prefix> + <12-bit random string in ZoneId> + "share.eo.dns[0-5].com". For example, if the prefix is "example.com", the created shared CNAME is "example.com.sai2ig51kaa5.share.eo.dnse2.com"
Example: example.com
                     * 
                     */
                    void SetSharedCNAMEPrefix(const std::string& _sharedCNAMEPrefix);

                    /**
                     * 判断参数 SharedCNAMEPrefix 是否已赋值
                     * @return SharedCNAMEPrefix 是否已赋值
                     * 
                     */
                    bool SharedCNAMEPrefixHasBeenSet() const;

                    /**
                     * 获取Description. It supports 1-50 characters.
                     * @return Description Description. It supports 1-50 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description. It supports 1-50 characters.
                     * @param _description Description. It supports 1-50 characters.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * ID of the site to which the shared CNAME belongs.	
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Prefix of the shared CNAME. Format: "test-api","test-api.com". Up 50 characters allowed.
The full format of the shared CNAME is: <custom prefix> + <12-bit random string in ZoneId> + "share.eo.dns[0-5].com". For example, if the prefix is "example.com", the created shared CNAME is "example.com.sai2ig51kaa5.share.eo.dnse2.com"
Example: example.com
                     */
                    std::string m_sharedCNAMEPrefix;
                    bool m_sharedCNAMEPrefixHasBeenSet;

                    /**
                     * Description. It supports 1-50 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATESHAREDCNAMEREQUEST_H_
