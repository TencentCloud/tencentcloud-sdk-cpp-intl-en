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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_CREATEDEDICATEDCLUSTERREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_CREATEDEDICATEDCLUSTERREQUEST_H_

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
                * CreateDedicatedCluster request structure.
                */
                class CreateDedicatedClusterRequest : public AbstractModel
                {
                public:
                    CreateDedicatedClusterRequest();
                    ~CreateDedicatedClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SiteId to which the CDC belongs
                     * @return SiteId SiteId to which the CDC belongs
                     * 
                     */
                    std::string GetSiteId() const;

                    /**
                     * 设置SiteId to which the CDC belongs
                     * @param _siteId SiteId to which the CDC belongs
                     * 
                     */
                    void SetSiteId(const std::string& _siteId);

                    /**
                     * 判断参数 SiteId 是否已赋值
                     * @return SiteId 是否已赋值
                     * 
                     */
                    bool SiteIdHasBeenSet() const;

                    /**
                     * 获取CDC name
                     * @return Name CDC name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置CDC name
                     * @param _name CDC name
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
                     * 获取AZ to which the CDC belongs
                     * @return Zone AZ to which the CDC belongs
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ to which the CDC belongs
                     * @param _zone AZ to which the CDC belongs
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
                     * 获取CDC description
                     * @return Description CDC description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置CDC description
                     * @param _description CDC description
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
                     * SiteId to which the CDC belongs
                     */
                    std::string m_siteId;
                    bool m_siteIdHasBeenSet;

                    /**
                     * CDC name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * AZ to which the CDC belongs
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * CDC description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_CREATEDEDICATEDCLUSTERREQUEST_H_
