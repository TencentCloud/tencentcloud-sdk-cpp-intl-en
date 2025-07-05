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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEZONEDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEZONEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Cost analysis availability zone complex type
                */
                class AnalyseZoneDetail : public AbstractModel
                {
                public:
                    AnalyseZoneDetail();
                    ~AnalyseZoneDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Availability zone IDNote: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneId Availability zone IDNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Availability zone IDNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneId Availability zone IDNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Availability zone nameNote: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneName Availability zone nameNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Availability zone nameNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneName Availability zone nameNote: This field may return null, indicating that no valid values can be obtained.
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
                     * Availability zone IDNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Availability zone nameNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEZONEDETAIL_H_
