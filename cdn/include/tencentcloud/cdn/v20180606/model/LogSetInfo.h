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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_LOGSETINFO_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_LOGSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Logset information
                */
                class LogSetInfo : public AbstractModel
                {
                public:
                    LogSetInfo();
                    ~LogSetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Developer ID
                     * @return AppId Developer ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置Developer ID
                     * @param _appId Developer ID
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Channel
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Channel Channel
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置Channel
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _channel Channel
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取Logset ID
                     * @return LogsetId Logset ID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID
                     * @param _logsetId Logset ID
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Logset name
                     * @return LogsetName Logset name
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置Logset name
                     * @param _logsetName Logset name
                     * 
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取Whether it is the default logset
                     * @return IsDefault Whether it is the default logset
                     * 
                     */
                    uint64_t GetIsDefault() const;

                    /**
                     * 设置Whether it is the default logset
                     * @param _isDefault Whether it is the default logset
                     * 
                     */
                    void SetIsDefault(const uint64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Log retention period in days
                     * @return LogsetSavePeriod Log retention period in days
                     * 
                     */
                    uint64_t GetLogsetSavePeriod() const;

                    /**
                     * 设置Log retention period in days
                     * @param _logsetSavePeriod Log retention period in days
                     * 
                     */
                    void SetLogsetSavePeriod(const uint64_t& _logsetSavePeriod);

                    /**
                     * 判断参数 LogsetSavePeriod 是否已赋值
                     * @return LogsetSavePeriod 是否已赋值
                     * 
                     */
                    bool LogsetSavePeriodHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Whether the logset has been removed from CLS
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Deleted Whether the logset has been removed from CLS
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDeleted() const;

                    /**
                     * 设置Whether the logset has been removed from CLS
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _deleted Whether the logset has been removed from CLS
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDeleted(const std::string& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                    /**
                     * 获取Whether English is used in this region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RegionEn Whether English is used in this region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRegionEn() const;

                    /**
                     * 设置Whether English is used in this region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _regionEn Whether English is used in this region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRegionEn(const std::string& _regionEn);

                    /**
                     * 判断参数 RegionEn 是否已赋值
                     * @return RegionEn 是否已赋值
                     * 
                     */
                    bool RegionEnHasBeenSet() const;

                private:

                    /**
                     * Developer ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Channel
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * Logset ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Logset name
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * Whether it is the default logset
                     */
                    uint64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Log retention period in days
                     */
                    uint64_t m_logsetSavePeriod;
                    bool m_logsetSavePeriodHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Whether the logset has been removed from CLS
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * Whether English is used in this region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_regionEn;
                    bool m_regionEnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_LOGSETINFO_H_
