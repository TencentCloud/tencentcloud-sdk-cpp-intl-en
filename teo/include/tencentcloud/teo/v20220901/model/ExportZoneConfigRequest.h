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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EXPORTZONECONFIGREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EXPORTZONECONFIGREQUEST_H_

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
                * ExportZoneConfig request structure.
                */
                class ExportZoneConfigRequest : public AbstractModel
                {
                public:
                    ExportZoneConfigRequest();
                    ~ExportZoneConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
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
                     * 获取Type list of configuration items to export. If not specified, all types of configurations will be exported. Currently supported values: <li>L7AccelerationConfig: exports the Layer-7 acceleration configuration, corresponding to Site Acceleration - Global Acceleration Configuration and Site Acceleration - Rule Engine in the console.</li><li>WebSecurity: exports the Web protection configuration.</li><li>AccelerationDomain: exports the acceleration domain name configuration, corresponding to DNS - Domain Name Management and DNS - Shared CNAME Management in the console.</li><li>Origin: exports the origin configuration, corresponding to Origin Configuration - Origin Groups and Origin Configuration - Load Balancing in the console.</li> Note: The types supported for future export will increase with iterations. Pay attention to export file size when exporting all types. It is recommended to specify the configuration types to be exported to control the request and response packet payload size.
                     * @return Types Type list of configuration items to export. If not specified, all types of configurations will be exported. Currently supported values: <li>L7AccelerationConfig: exports the Layer-7 acceleration configuration, corresponding to Site Acceleration - Global Acceleration Configuration and Site Acceleration - Rule Engine in the console.</li><li>WebSecurity: exports the Web protection configuration.</li><li>AccelerationDomain: exports the acceleration domain name configuration, corresponding to DNS - Domain Name Management and DNS - Shared CNAME Management in the console.</li><li>Origin: exports the origin configuration, corresponding to Origin Configuration - Origin Groups and Origin Configuration - Load Balancing in the console.</li> Note: The types supported for future export will increase with iterations. Pay attention to export file size when exporting all types. It is recommended to specify the configuration types to be exported to control the request and response packet payload size.
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置Type list of configuration items to export. If not specified, all types of configurations will be exported. Currently supported values: <li>L7AccelerationConfig: exports the Layer-7 acceleration configuration, corresponding to Site Acceleration - Global Acceleration Configuration and Site Acceleration - Rule Engine in the console.</li><li>WebSecurity: exports the Web protection configuration.</li><li>AccelerationDomain: exports the acceleration domain name configuration, corresponding to DNS - Domain Name Management and DNS - Shared CNAME Management in the console.</li><li>Origin: exports the origin configuration, corresponding to Origin Configuration - Origin Groups and Origin Configuration - Load Balancing in the console.</li> Note: The types supported for future export will increase with iterations. Pay attention to export file size when exporting all types. It is recommended to specify the configuration types to be exported to control the request and response packet payload size.
                     * @param _types Type list of configuration items to export. If not specified, all types of configurations will be exported. Currently supported values: <li>L7AccelerationConfig: exports the Layer-7 acceleration configuration, corresponding to Site Acceleration - Global Acceleration Configuration and Site Acceleration - Rule Engine in the console.</li><li>WebSecurity: exports the Web protection configuration.</li><li>AccelerationDomain: exports the acceleration domain name configuration, corresponding to DNS - Domain Name Management and DNS - Shared CNAME Management in the console.</li><li>Origin: exports the origin configuration, corresponding to Origin Configuration - Origin Groups and Origin Configuration - Load Balancing in the console.</li> Note: The types supported for future export will increase with iterations. Pay attention to export file size when exporting all types. It is recommended to specify the configuration types to be exported to control the request and response packet payload size.
                     * 
                     */
                    void SetTypes(const std::vector<std::string>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Type list of configuration items to export. If not specified, all types of configurations will be exported. Currently supported values: <li>L7AccelerationConfig: exports the Layer-7 acceleration configuration, corresponding to Site Acceleration - Global Acceleration Configuration and Site Acceleration - Rule Engine in the console.</li><li>WebSecurity: exports the Web protection configuration.</li><li>AccelerationDomain: exports the acceleration domain name configuration, corresponding to DNS - Domain Name Management and DNS - Shared CNAME Management in the console.</li><li>Origin: exports the origin configuration, corresponding to Origin Configuration - Origin Groups and Origin Configuration - Load Balancing in the console.</li> Note: The types supported for future export will increase with iterations. Pay attention to export file size when exporting all types. It is recommended to specify the configuration types to be exported to control the request and response packet payload size.
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXPORTZONECONFIGREQUEST_H_
