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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEZONESINFO_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEZONESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Query the sales API. The return type is zone information.
                */
                class DescribeSaleZonesInfo : public AbstractModel
                {
                public:
                    DescribeSaleZonesInfo();
                    ~DescribeSaleZonesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>English string of Zone</p>
                     * @return Zone <p>English string of Zone</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>English string of Zone</p>
                     * @param _zone <p>English string of Zone</p>
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
                     * 获取<p>Zone Chinese character string</p>
                     * @return ZoneName <p>Zone Chinese character string</p>
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置<p>Zone Chinese character string</p>
                     * @param _zoneName <p>Zone Chinese character string</p>
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取<p>Whether to sell, 1: sell; 0: do not sell</p>
                     * @return Enable <p>Whether to sell, 1: sell; 0: do not sell</p>
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置<p>Whether to sell, 1: sell; 0: do not sell</p>
                     * @param _enable <p>Whether to sell, 1: sell; 0: do not sell</p>
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>Whether the default primary AZ is used. 0 means no, 1 means yes.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsDefaultMaster <p>Whether the default primary AZ is used. 0 means no, 1 means yes.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsDefaultMaster() const;

                    /**
                     * 设置<p>Whether the default primary AZ is used. 0 means no, 1 means yes.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isDefaultMaster <p>Whether the default primary AZ is used. 0 means no, 1 means yes.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsDefaultMaster(const int64_t& _isDefaultMaster);

                    /**
                     * 判断参数 IsDefaultMaster 是否已赋值
                     * @return IsDefaultMaster 是否已赋值
                     * 
                     */
                    bool IsDefaultMasterHasBeenSet() const;

                    /**
                     * 获取<p>Selectable disk types in availability zones</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AvailableDiskTypes <p>Selectable disk types in availability zones</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAvailableDiskTypes() const;

                    /**
                     * 设置<p>Selectable disk types in availability zones</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _availableDiskTypes <p>Selectable disk types in availability zones</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAvailableDiskTypes(const std::vector<std::string>& _availableDiskTypes);

                    /**
                     * 判断参数 AvailableDiskTypes 是否已赋值
                     * @return AvailableDiskTypes 是否已赋值
                     * 
                     */
                    bool AvailableDiskTypesHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is an exclusive availability zone</p>
                     * @return SupportTypes <p>Whether it is an exclusive availability zone</p>
                     * 
                     */
                    std::vector<std::string> GetSupportTypes() const;

                    /**
                     * 设置<p>Whether it is an exclusive availability zone</p>
                     * @param _supportTypes <p>Whether it is an exclusive availability zone</p>
                     * 
                     */
                    void SetSupportTypes(const std::vector<std::string>& _supportTypes);

                    /**
                     * 判断参数 SupportTypes 是否已赋值
                     * @return SupportTypes 是否已赋值
                     * 
                     */
                    bool SupportTypesHasBeenSet() const;

                    /**
                     * 获取<p>Whether serverless is supported</p>
                     * @return IsSupportServerless <p>Whether serverless is supported</p>
                     * 
                     */
                    bool GetIsSupportServerless() const;

                    /**
                     * 设置<p>Whether serverless is supported</p>
                     * @param _isSupportServerless <p>Whether serverless is supported</p>
                     * 
                     */
                    void SetIsSupportServerless(const bool& _isSupportServerless);

                    /**
                     * 判断参数 IsSupportServerless 是否已赋值
                     * @return IsSupportServerless 是否已赋值
                     * 
                     */
                    bool IsSupportServerlessHasBeenSet() const;

                private:

                    /**
                     * <p>English string of Zone</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Zone Chinese character string</p>
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * <p>Whether to sell, 1: sell; 0: do not sell</p>
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Whether the default primary AZ is used. 0 means no, 1 means yes.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isDefaultMaster;
                    bool m_isDefaultMasterHasBeenSet;

                    /**
                     * <p>Selectable disk types in availability zones</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_availableDiskTypes;
                    bool m_availableDiskTypesHasBeenSet;

                    /**
                     * <p>Whether it is an exclusive availability zone</p>
                     */
                    std::vector<std::string> m_supportTypes;
                    bool m_supportTypesHasBeenSet;

                    /**
                     * <p>Whether serverless is supported</p>
                     */
                    bool m_isSupportServerless;
                    bool m_isSupportServerlessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEZONESINFO_H_
