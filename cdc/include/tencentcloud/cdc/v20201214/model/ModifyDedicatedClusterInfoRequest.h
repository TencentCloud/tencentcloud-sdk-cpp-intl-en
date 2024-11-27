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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYDEDICATEDCLUSTERINFOREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYDEDICATEDCLUSTERINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * ModifyDedicatedClusterInfo request structure.
                */
                class ModifyDedicatedClusterInfoRequest : public AbstractModel
                {
                public:
                    ModifyDedicatedClusterInfoRequest();
                    ~ModifyDedicatedClusterInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CDC ID
                     * @return DedicatedClusterId CDC ID
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置CDC ID
                     * @param _dedicatedClusterId CDC ID
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取New cluster name
                     * @return Name New cluster name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置New cluster name
                     * @param _name New cluster name
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
                     * 获取New cluster AZ
                     * @return Zone New cluster AZ
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置New cluster AZ
                     * @param _zone New cluster AZ
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取New cluster description
                     * @return Description New cluster description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置New cluster description
                     * @param _description New cluster description
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
                     * 获取Site where the cluster resides
                     * @return SiteId Site where the cluster resides
                     * 
                     */
                    std::string GetSiteId() const;

                    /**
                     * 设置Site where the cluster resides
                     * @param _siteId Site where the cluster resides
                     * 
                     */
                    void SetSiteId(const std::string& _siteId);

                    /**
                     * 判断参数 SiteId 是否已赋值
                     * @return SiteId 是否已赋值
                     * 
                     */
                    bool SiteIdHasBeenSet() const;

                private:

                    /**
                     * CDC ID
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * New cluster name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * New cluster AZ
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * New cluster description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Site where the cluster resides
                     */
                    std::string m_siteId;
                    bool m_siteIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYDEDICATEDCLUSTERINFOREQUEST_H_
