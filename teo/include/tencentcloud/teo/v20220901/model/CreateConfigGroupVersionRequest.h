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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATECONFIGGROUPVERSIONREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATECONFIGGROUPVERSIONREQUEST_H_

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
                * CreateConfigGroupVersion request structure.
                */
                class CreateConfigGroupVersionRequest : public AbstractModel
                {
                public:
                    CreateConfigGroupVersionRequest();
                    ~CreateConfigGroupVersionRequest() = default;
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
                     * 获取GroupId of the version to be created.
                     * @return GroupId GroupId of the version to be created.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置GroupId of the version to be created.
                     * @param _groupId GroupId of the version to be created.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Configuration content to be imported. It is required to be in JSON format and encoded in UTF-8. Please refer to the example below for the configuration file content.
                     * @return Content Configuration content to be imported. It is required to be in JSON format and encoded in UTF-8. Please refer to the example below for the configuration file content.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Configuration content to be imported. It is required to be in JSON format and encoded in UTF-8. Please refer to the example below for the configuration file content.
                     * @param _content Configuration content to be imported. It is required to be in JSON format and encoded in UTF-8. Please refer to the example below for the configuration file content.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Version description. The maximum length allowed is 50 characters. This field can be used to provide details about the application scenarios of this version.
                     * @return Description Version description. The maximum length allowed is 50 characters. This field can be used to provide details about the application scenarios of this version.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Version description. The maximum length allowed is 50 characters. This field can be used to provide details about the application scenarios of this version.
                     * @param _description Version description. The maximum length allowed is 50 characters. This field can be used to provide details about the application scenarios of this version.
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
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * GroupId of the version to be created.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Configuration content to be imported. It is required to be in JSON format and encoded in UTF-8. Please refer to the example below for the configuration file content.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Version description. The maximum length allowed is 50 characters. This field can be used to provide details about the application scenarios of this version.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATECONFIGGROUPVERSIONREQUEST_H_
