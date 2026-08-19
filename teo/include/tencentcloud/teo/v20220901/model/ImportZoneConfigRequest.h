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
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
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
                     * 获取<p>Configuration content to be imported. Use JSON format and encode by UTF-8. You can obtain the configuration content through the site configuration export interface (ExportZoneConfig). You can individually import "Site Acceleration - Global Acceleration Configuration" or "Site Acceleration - Rule Engine". Just pass in the corresponding fields. For specific details, see the example below.<br>Note: AccelerationDomain (acceleration domain name configuration) and Origin (origin configuration) exported by ExportZoneConfig are temporary not supported for import through this interface. If the Content contains the above configuration content, it will cause import failure.</p>
                     * @return Content <p>Configuration content to be imported. Use JSON format and encode by UTF-8. You can obtain the configuration content through the site configuration export interface (ExportZoneConfig). You can individually import "Site Acceleration - Global Acceleration Configuration" or "Site Acceleration - Rule Engine". Just pass in the corresponding fields. For specific details, see the example below.<br>Note: AccelerationDomain (acceleration domain name configuration) and Origin (origin configuration) exported by ExportZoneConfig are temporary not supported for import through this interface. If the Content contains the above configuration content, it will cause import failure.</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>Configuration content to be imported. Use JSON format and encode by UTF-8. You can obtain the configuration content through the site configuration export interface (ExportZoneConfig). You can individually import "Site Acceleration - Global Acceleration Configuration" or "Site Acceleration - Rule Engine". Just pass in the corresponding fields. For specific details, see the example below.<br>Note: AccelerationDomain (acceleration domain name configuration) and Origin (origin configuration) exported by ExportZoneConfig are temporary not supported for import through this interface. If the Content contains the above configuration content, it will cause import failure.</p>
                     * @param _content <p>Configuration content to be imported. Use JSON format and encode by UTF-8. You can obtain the configuration content through the site configuration export interface (ExportZoneConfig). You can individually import "Site Acceleration - Global Acceleration Configuration" or "Site Acceleration - Rule Engine". Just pass in the corresponding fields. For specific details, see the example below.<br>Note: AccelerationDomain (acceleration domain name configuration) and Origin (origin configuration) exported by ExportZoneConfig are temporary not supported for import through this interface. If the Content contains the above configuration content, it will cause import failure.</p>
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
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Configuration content to be imported. Use JSON format and encode by UTF-8. You can obtain the configuration content through the site configuration export interface (ExportZoneConfig). You can individually import "Site Acceleration - Global Acceleration Configuration" or "Site Acceleration - Rule Engine". Just pass in the corresponding fields. For specific details, see the example below.<br>Note: AccelerationDomain (acceleration domain name configuration) and Origin (origin configuration) exported by ExportZoneConfig are temporary not supported for import through this interface. If the Content contains the above configuration content, it will cause import failure.</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IMPORTZONECONFIGREQUEST_H_
