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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IMPORTZONECONFIGREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IMPORTZONECONFIGREQUEST_H_

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
                * ImportZoneConfig request structure.
                */
                class ImportZoneConfigRequest : public AbstractModel
                {
                public:
                    ImportZoneConfigRequest();
                    ~ImportZoneConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Zone ID.</p>
                     * @return ZoneId <p>Zone ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Zone ID.</p>
                     * @param _zoneId <p>Zone ID.</p>
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
                     * 获取<p>Configuration content to be imported. It must be in JSON format and encoded in UTF-8. You can obtain the configuration content through the site configuration export API (ExportZoneConfig). You can individually import "Site Acceleration - Global Acceleration Configuration" or "Site Acceleration - Rule Engine" by passing in the corresponding fields. For details, refer to the example below.<br>Note: AccelerationDomain (acceleration domain name configuration) and Origin (origin server configuration) exported by ExportZoneConfig are not currently supported for import through this interface. If Content contains the above configuration content, the import will fail.</p>
                     * @return Content <p>Configuration content to be imported. It must be in JSON format and encoded in UTF-8. You can obtain the configuration content through the site configuration export API (ExportZoneConfig). You can individually import "Site Acceleration - Global Acceleration Configuration" or "Site Acceleration - Rule Engine" by passing in the corresponding fields. For details, refer to the example below.<br>Note: AccelerationDomain (acceleration domain name configuration) and Origin (origin server configuration) exported by ExportZoneConfig are not currently supported for import through this interface. If Content contains the above configuration content, the import will fail.</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>Configuration content to be imported. It must be in JSON format and encoded in UTF-8. You can obtain the configuration content through the site configuration export API (ExportZoneConfig). You can individually import "Site Acceleration - Global Acceleration Configuration" or "Site Acceleration - Rule Engine" by passing in the corresponding fields. For details, refer to the example below.<br>Note: AccelerationDomain (acceleration domain name configuration) and Origin (origin server configuration) exported by ExportZoneConfig are not currently supported for import through this interface. If Content contains the above configuration content, the import will fail.</p>
                     * @param _content <p>Configuration content to be imported. It must be in JSON format and encoded in UTF-8. You can obtain the configuration content through the site configuration export API (ExportZoneConfig). You can individually import "Site Acceleration - Global Acceleration Configuration" or "Site Acceleration - Rule Engine" by passing in the corresponding fields. For details, refer to the example below.<br>Note: AccelerationDomain (acceleration domain name configuration) and Origin (origin server configuration) exported by ExportZoneConfig are not currently supported for import through this interface. If Content contains the above configuration content, the import will fail.</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * <p>Zone ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Configuration content to be imported. It must be in JSON format and encoded in UTF-8. You can obtain the configuration content through the site configuration export API (ExportZoneConfig). You can individually import "Site Acceleration - Global Acceleration Configuration" or "Site Acceleration - Rule Engine" by passing in the corresponding fields. For details, refer to the example below.<br>Note: AccelerationDomain (acceleration domain name configuration) and Origin (origin server configuration) exported by ExportZoneConfig are not currently supported for import through this interface. If Content contains the above configuration content, the import will fail.</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IMPORTZONECONFIGREQUEST_H_
