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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYENTITY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Protected resource
                */
                class SecurityEntity : public AbstractModel
                {
                public:
                    SecurityEntity();
                    ~SecurityEntity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取The subdomain name/layer-4 proxy
                     * @return Entity The subdomain name/layer-4 proxy
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置The subdomain name/layer-4 proxy
                     * @param Entity The subdomain name/layer-4 proxy
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取The type. Values:
<li>`domain`: Layer-7 subdomain name</li>
<li>`application`: Layer-4 proxy name</li>
                     * @return EntityType The type. Values:
<li>`domain`: Layer-7 subdomain name</li>
<li>`application`: Layer-4 proxy name</li>
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置The type. Values:
<li>`domain`: Layer-7 subdomain name</li>
<li>`application`: Layer-4 proxy name</li>
                     * @param EntityType The type. Values:
<li>`domain`: Layer-7 subdomain name</li>
<li>`application`: Layer-4 proxy name</li>
                     */
                    void SetEntityType(const std::string& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     */
                    bool EntityTypeHasBeenSet() const;

                private:

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The subdomain name/layer-4 proxy
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * The type. Values:
<li>`domain`: Layer-7 subdomain name</li>
<li>`application`: Layer-4 proxy name</li>
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYENTITY_H_
