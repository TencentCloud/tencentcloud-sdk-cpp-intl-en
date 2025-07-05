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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_AREA_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_AREA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Region information
                */
                class Area : public AbstractModel
                {
                public:
                    Area();
                    ~Area() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region ID
                     * @return AreaId Region ID
                     * 
                     */
                    std::string GetAreaId() const;

                    /**
                     * 设置Region ID
                     * @param _areaId Region ID
                     * 
                     */
                    void SetAreaId(const std::string& _areaId);

                    /**
                     * 判断参数 AreaId 是否已赋值
                     * @return AreaId 是否已赋值
                     * 
                     */
                    bool AreaIdHasBeenSet() const;

                    /**
                     * 获取Region name
                     * @return AreaName Region name
                     * 
                     */
                    std::string GetAreaName() const;

                    /**
                     * 设置Region name
                     * @param _areaName Region name
                     * 
                     */
                    void SetAreaName(const std::string& _areaName);

                    /**
                     * 判断参数 AreaName 是否已赋值
                     * @return AreaName 是否已赋值
                     * 
                     */
                    bool AreaNameHasBeenSet() const;

                private:

                    /**
                     * Region ID
                     */
                    std::string m_areaId;
                    bool m_areaIdHasBeenSet;

                    /**
                     * Region name
                     */
                    std::string m_areaName;
                    bool m_areaNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_AREA_H_
