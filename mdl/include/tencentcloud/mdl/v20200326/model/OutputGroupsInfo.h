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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_OUTPUTGROUPSINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_OUTPUTGROUPSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/OutputInfo.h>
#include <tencentcloud/mdl/v20200326/model/DestinationInfo.h>
#include <tencentcloud/mdl/v20200326/model/HlsRemuxSettingsInfo.h>
#include <tencentcloud/mdl/v20200326/model/DashRemuxSettingsInfo.h>
#include <tencentcloud/mdl/v20200326/model/DrmSettingsInfo.h>
#include <tencentcloud/mdl/v20200326/model/MediaPackageSettingsInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * 频道输出组信息。
                */
                class OutputGroupsInfo : public AbstractModel
                {
                public:
                    OutputGroupsInfo();
                    ~OutputGroupsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Name 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param Name 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Output protocol type.
Valid values: HLS, DASH, HLS_ARCHIVE, HLS_MEDIA_PACKAGE, DASH_MEDIA_PACKAGE.
                     * @return Type Output protocol type.
Valid values: HLS, DASH, HLS_ARCHIVE, HLS_MEDIA_PACKAGE, DASH_MEDIA_PACKAGE.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Output protocol type.
Valid values: HLS, DASH, HLS_ARCHIVE, HLS_MEDIA_PACKAGE, DASH_MEDIA_PACKAGE.
                     * @param Type Output protocol type.
Valid values: HLS, DASH, HLS_ARCHIVE, HLS_MEDIA_PACKAGE, DASH_MEDIA_PACKAGE.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Outputs 
                     */
                    std::vector<OutputInfo> GetOutputs() const;

                    /**
                     * 设置
                     * @param Outputs 
                     */
                    void SetOutputs(const std::vector<OutputInfo>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     */
                    bool OutputsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Destinations 
                     */
                    std::vector<DestinationInfo> GetDestinations() const;

                    /**
                     * 设置
                     * @param Destinations 
                     */
                    void SetDestinations(const std::vector<DestinationInfo>& _destinations);

                    /**
                     * 判断参数 Destinations 是否已赋值
                     * @return Destinations 是否已赋值
                     */
                    bool DestinationsHasBeenSet() const;

                    /**
                     * 获取
                     * @return HlsRemuxSettings 
                     */
                    HlsRemuxSettingsInfo GetHlsRemuxSettings() const;

                    /**
                     * 设置
                     * @param HlsRemuxSettings 
                     */
                    void SetHlsRemuxSettings(const HlsRemuxSettingsInfo& _hlsRemuxSettings);

                    /**
                     * 判断参数 HlsRemuxSettings 是否已赋值
                     * @return HlsRemuxSettings 是否已赋值
                     */
                    bool HlsRemuxSettingsHasBeenSet() const;

                    /**
                     * 获取
                     * @return DashRemuxSettings 
                     */
                    DashRemuxSettingsInfo GetDashRemuxSettings() const;

                    /**
                     * 设置
                     * @param DashRemuxSettings 
                     */
                    void SetDashRemuxSettings(const DashRemuxSettingsInfo& _dashRemuxSettings);

                    /**
                     * 判断参数 DashRemuxSettings 是否已赋值
                     * @return DashRemuxSettings 是否已赋值
                     */
                    bool DashRemuxSettingsHasBeenSet() const;

                    /**
                     * 获取
                     * @return DrmSettings 
                     */
                    DrmSettingsInfo GetDrmSettings() const;

                    /**
                     * 设置
                     * @param DrmSettings 
                     */
                    void SetDrmSettings(const DrmSettingsInfo& _drmSettings);

                    /**
                     * 判断参数 DrmSettings 是否已赋值
                     * @return DrmSettings 是否已赋值
                     */
                    bool DrmSettingsHasBeenSet() const;

                    /**
                     * 获取Configuration information of media packaging, which is required when `Type` is set to MediaPackage.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MediaPackageSettings Configuration information of media packaging, which is required when `Type` is set to MediaPackage.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaPackageSettingsInfo GetMediaPackageSettings() const;

                    /**
                     * 设置Configuration information of media packaging, which is required when `Type` is set to MediaPackage.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MediaPackageSettings Configuration information of media packaging, which is required when `Type` is set to MediaPackage.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMediaPackageSettings(const MediaPackageSettingsInfo& _mediaPackageSettings);

                    /**
                     * 判断参数 MediaPackageSettings 是否已赋值
                     * @return MediaPackageSettings 是否已赋值
                     */
                    bool MediaPackageSettingsHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Output protocol type.
Valid values: HLS, DASH, HLS_ARCHIVE, HLS_MEDIA_PACKAGE, DASH_MEDIA_PACKAGE.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<OutputInfo> m_outputs;
                    bool m_outputsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<DestinationInfo> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * 
                     */
                    HlsRemuxSettingsInfo m_hlsRemuxSettings;
                    bool m_hlsRemuxSettingsHasBeenSet;

                    /**
                     * 
                     */
                    DashRemuxSettingsInfo m_dashRemuxSettings;
                    bool m_dashRemuxSettingsHasBeenSet;

                    /**
                     * 
                     */
                    DrmSettingsInfo m_drmSettings;
                    bool m_drmSettingsHasBeenSet;

                    /**
                     * Configuration information of media packaging, which is required when `Type` is set to MediaPackage.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaPackageSettingsInfo m_mediaPackageSettings;
                    bool m_mediaPackageSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_OUTPUTGROUPSINFO_H_
