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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_SITE_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_SITE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Customer site information
                */
                class Site : public AbstractModel
                {
                public:
                    Site();
                    ~Site() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Site name
                     * @return Name Site name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Site name
                     * @param _name Site name
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
                     * 获取Site id
                     * @return SiteId Site id
                     * 
                     */
                    std::string GetSiteId() const;

                    /**
                     * 设置Site id
                     * @param _siteId Site id
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
                     * 获取Site description 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return Description Site description 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Site description 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _description Site description 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
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
                     * 获取Site creation time
                     * @return CreateTime Site creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Site creation time
                     * @param _createTime Site creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Site name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Site id
                     */
                    std::string m_siteId;
                    bool m_siteIdHasBeenSet;

                    /**
                     * Site description 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Site creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_SITE_H_
