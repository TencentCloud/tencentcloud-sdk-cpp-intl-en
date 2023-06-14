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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLEZONE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLEZONE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/AvailableType.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Versioning - array of AZs
                */
                class AvailableZone : public AbstractModel
                {
                public:
                    AvailableZone();
                    ~AvailableZone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AZ name
                     * @return Zone AZ name
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ name
                     * @param _zone AZ name
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
                     * 获取AZ ID
                     * @return ZoneId AZ ID
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置AZ ID
                     * @param _zoneId AZ ID
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Chinese name of an AZ
                     * @return ZoneCnName Chinese name of an AZ
                     * 
                     */
                    std::string GetZoneCnName() const;

                    /**
                     * 设置Chinese name of an AZ
                     * @param _zoneCnName Chinese name of an AZ
                     * 
                     */
                    void SetZoneCnName(const std::string& _zoneCnName);

                    /**
                     * 判断参数 ZoneCnName 是否已赋值
                     * @return ZoneCnName 是否已赋值
                     * 
                     */
                    bool ZoneCnNameHasBeenSet() const;

                    /**
                     * 获取Array of classes
                     * @return Types Array of classes
                     * 
                     */
                    std::vector<AvailableType> GetTypes() const;

                    /**
                     * 设置Array of classes
                     * @param _types Array of classes
                     * 
                     */
                    void SetTypes(const std::vector<AvailableType>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                    /**
                     * 获取Chinese and English names of an AZ
                     * @return ZoneName Chinese and English names of an AZ
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Chinese and English names of an AZ
                     * @param _zoneName Chinese and English names of an AZ
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                private:

                    /**
                     * AZ name
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * AZ ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Chinese name of an AZ
                     */
                    std::string m_zoneCnName;
                    bool m_zoneCnNameHasBeenSet;

                    /**
                     * Array of classes
                     */
                    std::vector<AvailableType> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * Chinese and English names of an AZ
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLEZONE_H_
