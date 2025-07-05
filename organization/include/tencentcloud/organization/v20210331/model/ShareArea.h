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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHAREAREA_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHAREAREA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Shared region
                */
                class ShareArea : public AbstractModel
                {
                public:
                    ShareArea();
                    ~ShareArea() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region name.
                     * @return Name Region name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Region name.
                     * @param _name Region name.
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
                     * 获取Region identifier.
                     * @return Area Region identifier.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Region identifier.
                     * @param _area Region identifier.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Region ID.
                     * @return AreaId Region ID.
                     * 
                     */
                    int64_t GetAreaId() const;

                    /**
                     * 设置Region ID.
                     * @param _areaId Region ID.
                     * 
                     */
                    void SetAreaId(const int64_t& _areaId);

                    /**
                     * 判断参数 AreaId 是否已赋值
                     * @return AreaId 是否已赋值
                     * 
                     */
                    bool AreaIdHasBeenSet() const;

                private:

                    /**
                     * Region name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Region identifier.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Region ID.
                     */
                    int64_t m_areaId;
                    bool m_areaIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHAREAREA_H_
