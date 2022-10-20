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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATESECURITYDROPPAGEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATESECURITYDROPPAGEREQUEST_H_

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
                * CreateSecurityDropPage request structure.
                */
                class CreateSecurityDropPageRequest : public AbstractModel
                {
                public:
                    CreateSecurityDropPageRequest();
                    ~CreateSecurityDropPageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param ZoneId The site ID.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The subdomain name.
                     * @return Entity The subdomain name.
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置The subdomain name.
                     * @param Entity The subdomain name.
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取Name of the block page file.
                     * @return Name Name of the block page file.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the block page file.
                     * @param Name Name of the block page file.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The block page content, which is passed after being URL-encoded.
                     * @return Content The block page content, which is passed after being URL-encoded.
                     */
                    std::string GetContent() const;

                    /**
                     * 设置The block page content, which is passed after being URL-encoded.
                     * @param Content The block page content, which is passed after being URL-encoded.
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取How to build the block page. Values:
<li>`file`: Upload a file to be URL-encoded.</li>
<li>`url`: Upload a URL to be URL-encoded.</li>
                     * @return Type How to build the block page. Values:
<li>`file`: Upload a file to be URL-encoded.</li>
<li>`url`: Upload a URL to be URL-encoded.</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置How to build the block page. Values:
<li>`file`: Upload a file to be URL-encoded.</li>
<li>`url`: Upload a URL to be URL-encoded.</li>
                     * @param Type How to build the block page. Values:
<li>`file`: Upload a file to be URL-encoded.</li>
<li>`url`: Upload a URL to be URL-encoded.</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The module that applies on the block page. Values:
<li>`waf`: Managed rules</li>
<li>`rate`: Custom rules</li>
                     * @return Module The module that applies on the block page. Values:
<li>`waf`: Managed rules</li>
<li>`rate`: Custom rules</li>
                     */
                    std::string GetModule() const;

                    /**
                     * 设置The module that applies on the block page. Values:
<li>`waf`: Managed rules</li>
<li>`rate`: Custom rules</li>
                     * @param Module The module that applies on the block page. Values:
<li>`waf`: Managed rules</li>
<li>`rate`: Custom rules</li>
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                private:

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The subdomain name.
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * Name of the block page file.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The block page content, which is passed after being URL-encoded.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * How to build the block page. Values:
<li>`file`: Upload a file to be URL-encoded.</li>
<li>`url`: Upload a URL to be URL-encoded.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The module that applies on the block page. Values:
<li>`waf`: Managed rules</li>
<li>`rate`: Custom rules</li>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATESECURITYDROPPAGEREQUEST_H_
