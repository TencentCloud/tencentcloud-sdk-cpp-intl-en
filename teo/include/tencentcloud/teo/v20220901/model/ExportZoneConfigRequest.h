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
                     * 获取It indicates exporting the type list of configuration . If it is left blank, all types of configurations will be exported. Currently supported valid values:<li>L7AccelerationConfig: It indicates exporting the Layer-7 acceleration configuration, corresponding to the console's "Site Acceleration - Global Acceleration Configuration" and "Site Acceleration - Rule Engine".</li>
Note: The types that will be supported for export in the future will increase with iterations. When exporting all types, pay attention to the export file size. It is recommended to specify the configuration types to be exported to control the request and response packet payload size.
                     * @return Types It indicates exporting the type list of configuration . If it is left blank, all types of configurations will be exported. Currently supported valid values:<li>L7AccelerationConfig: It indicates exporting the Layer-7 acceleration configuration, corresponding to the console's "Site Acceleration - Global Acceleration Configuration" and "Site Acceleration - Rule Engine".</li>
Note: The types that will be supported for export in the future will increase with iterations. When exporting all types, pay attention to the export file size. It is recommended to specify the configuration types to be exported to control the request and response packet payload size.
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置It indicates exporting the type list of configuration . If it is left blank, all types of configurations will be exported. Currently supported valid values:<li>L7AccelerationConfig: It indicates exporting the Layer-7 acceleration configuration, corresponding to the console's "Site Acceleration - Global Acceleration Configuration" and "Site Acceleration - Rule Engine".</li>
Note: The types that will be supported for export in the future will increase with iterations. When exporting all types, pay attention to the export file size. It is recommended to specify the configuration types to be exported to control the request and response packet payload size.
                     * @param _types It indicates exporting the type list of configuration . If it is left blank, all types of configurations will be exported. Currently supported valid values:<li>L7AccelerationConfig: It indicates exporting the Layer-7 acceleration configuration, corresponding to the console's "Site Acceleration - Global Acceleration Configuration" and "Site Acceleration - Rule Engine".</li>
Note: The types that will be supported for export in the future will increase with iterations. When exporting all types, pay attention to the export file size. It is recommended to specify the configuration types to be exported to control the request and response packet payload size.
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
                     * It indicates exporting the type list of configuration . If it is left blank, all types of configurations will be exported. Currently supported valid values:<li>L7AccelerationConfig: It indicates exporting the Layer-7 acceleration configuration, corresponding to the console's "Site Acceleration - Global Acceleration Configuration" and "Site Acceleration - Rule Engine".</li>
Note: The types that will be supported for export in the future will increase with iterations. When exporting all types, pay attention to the export file size. It is recommended to specify the configuration types to be exported to control the request and response packet payload size.
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXPORTZONECONFIGREQUEST_H_
