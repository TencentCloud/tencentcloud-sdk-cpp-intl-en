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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_TEMPLATESCOPE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_TEMPLATESCOPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/EntityStatus.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Domain names bound with the template. 
                */
                class TemplateScope : public AbstractModel
                {
                public:
                    TemplateScope();
                    ~TemplateScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the site.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ZoneId ID of the site.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _zoneId ID of the site.
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取List of instance statuses
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return EntityStatus List of instance statuses
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<EntityStatus> GetEntityStatus() const;

                    /**
                     * 设置List of instance statuses
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _entityStatus List of instance statuses
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEntityStatus(const std::vector<EntityStatus>& _entityStatus);

                    /**
                     * 判断参数 EntityStatus 是否已赋值
                     * @return EntityStatus 是否已赋值
                     * 
                     */
                    bool EntityStatusHasBeenSet() const;

                private:

                    /**
                     * ID of the site.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * List of instance statuses
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<EntityStatus> m_entityStatus;
                    bool m_entityStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_TEMPLATESCOPE_H_
