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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATECUSTOMERRORPAGEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATECUSTOMERRORPAGEREQUEST_H_

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
                * CreateCustomErrorPage request structure.
                */
                class CreateCustomErrorPageRequest : public AbstractModel
                {
                public:
                    CreateCustomErrorPageRequest();
                    ~CreateCustomErrorPageRequest() = default;
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
                     * 获取Name of the file specified to be returned.
                     * @return Name Name of the file specified to be returned.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the file specified to be returned.
                     * @param Name Name of the file specified to be returned.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The custom page content, which is passed after being URL-encoded.
                     * @return Content The custom page content, which is passed after being URL-encoded.
                     */
                    std::string GetContent() const;

                    /**
                     * 设置The custom page content, which is passed after being URL-encoded.
                     * @param Content The custom page content, which is passed after being URL-encoded.
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

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
                     * Name of the file specified to be returned.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The custom page content, which is passed after being URL-encoded.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATECUSTOMERRORPAGEREQUEST_H_
