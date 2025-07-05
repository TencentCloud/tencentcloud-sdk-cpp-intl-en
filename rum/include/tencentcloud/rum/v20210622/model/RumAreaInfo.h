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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_RUMAREAINFO_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_RUMAREAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * RUM region information
                */
                class RumAreaInfo : public AbstractModel
                {
                public:
                    RumAreaInfo();
                    ~RumAreaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region ID
                     * @return AreaId Region ID
                     * 
                     */
                    int64_t GetAreaId() const;

                    /**
                     * 设置Region ID
                     * @param _areaId Region ID
                     * 
                     */
                    void SetAreaId(const int64_t& _areaId);

                    /**
                     * 判断参数 AreaId 是否已赋值
                     * @return AreaId 是否已赋值
                     * 
                     */
                    bool AreaIdHasBeenSet() const;

                    /**
                     * 获取Region status (1: valid; 2: invalid)
                     * @return AreaStatus Region status (1: valid; 2: invalid)
                     * 
                     */
                    int64_t GetAreaStatus() const;

                    /**
                     * 设置Region status (1: valid; 2: invalid)
                     * @param _areaStatus Region status (1: valid; 2: invalid)
                     * 
                     */
                    void SetAreaStatus(const int64_t& _areaStatus);

                    /**
                     * 判断参数 AreaStatus 是否已赋值
                     * @return AreaStatus 是否已赋值
                     * 
                     */
                    bool AreaStatusHasBeenSet() const;

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

                    /**
                     * 获取Region key
                     * @return AreaKey Region key
                     * 
                     */
                    std::string GetAreaKey() const;

                    /**
                     * 设置Region key
                     * @param _areaKey Region key
                     * 
                     */
                    void SetAreaKey(const std::string& _areaKey);

                    /**
                     * 判断参数 AreaKey 是否已赋值
                     * @return AreaKey 是否已赋值
                     * 
                     */
                    bool AreaKeyHasBeenSet() const;

                    /**
                     * 获取Region ID.
                     * @return AreaRegionID Region ID.
                     * 
                     */
                    std::string GetAreaRegionID() const;

                    /**
                     * 设置Region ID.
                     * @param _areaRegionID Region ID.
                     * 
                     */
                    void SetAreaRegionID(const std::string& _areaRegionID);

                    /**
                     * 判断参数 AreaRegionID 是否已赋值
                     * @return AreaRegionID 是否已赋值
                     * 
                     */
                    bool AreaRegionIDHasBeenSet() const;

                    /**
                     * 获取Region code, such as “ap-xxx” (xxx is the region name).
                     * @return AreaRegionCode Region code, such as “ap-xxx” (xxx is the region name).
                     * 
                     */
                    std::string GetAreaRegionCode() const;

                    /**
                     * 设置Region code, such as “ap-xxx” (xxx is the region name).
                     * @param _areaRegionCode Region code, such as “ap-xxx” (xxx is the region name).
                     * 
                     */
                    void SetAreaRegionCode(const std::string& _areaRegionCode);

                    /**
                     * 判断参数 AreaRegionCode 是否已赋值
                     * @return AreaRegionCode 是否已赋值
                     * 
                     */
                    bool AreaRegionCodeHasBeenSet() const;

                    /**
                     * 获取Region abbreviation.
                     * @return AreaAbbr Region abbreviation.
                     * 
                     */
                    std::string GetAreaAbbr() const;

                    /**
                     * 设置Region abbreviation.
                     * @param _areaAbbr Region abbreviation.
                     * 
                     */
                    void SetAreaAbbr(const std::string& _areaAbbr);

                    /**
                     * 判断参数 AreaAbbr 是否已赋值
                     * @return AreaAbbr 是否已赋值
                     * 
                     */
                    bool AreaAbbrHasBeenSet() const;

                private:

                    /**
                     * Region ID
                     */
                    int64_t m_areaId;
                    bool m_areaIdHasBeenSet;

                    /**
                     * Region status (1: valid; 2: invalid)
                     */
                    int64_t m_areaStatus;
                    bool m_areaStatusHasBeenSet;

                    /**
                     * Region name
                     */
                    std::string m_areaName;
                    bool m_areaNameHasBeenSet;

                    /**
                     * Region key
                     */
                    std::string m_areaKey;
                    bool m_areaKeyHasBeenSet;

                    /**
                     * Region ID.
                     */
                    std::string m_areaRegionID;
                    bool m_areaRegionIDHasBeenSet;

                    /**
                     * Region code, such as “ap-xxx” (xxx is the region name).
                     */
                    std::string m_areaRegionCode;
                    bool m_areaRegionCodeHasBeenSet;

                    /**
                     * Region abbreviation.
                     */
                    std::string m_areaAbbr;
                    bool m_areaAbbrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_RUMAREAINFO_H_
