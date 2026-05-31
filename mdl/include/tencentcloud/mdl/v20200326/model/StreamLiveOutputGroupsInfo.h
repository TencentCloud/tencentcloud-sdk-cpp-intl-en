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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_STREAMLIVEOUTPUTGROUPSINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_STREAMLIVEOUTPUTGROUPSINFO_H_

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
#include <tencentcloud/mdl/v20200326/model/DrmSettingsInfo.h>
#include <tencentcloud/mdl/v20200326/model/DashRemuxSettingsInfo.h>
#include <tencentcloud/mdl/v20200326/model/StreamPackageSettingsInfo.h>
#include <tencentcloud/mdl/v20200326/model/TimeShiftSettingsInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Channel output group information
                */
                class StreamLiveOutputGroupsInfo : public AbstractModel
                {
                public:
                    StreamLiveOutputGroupsInfo();
                    ~StreamLiveOutputGroupsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Output group name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the channel level
                     * @return Name Output group name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the channel level
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Output group name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the channel level
                     * @param _name Output group name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the channel level
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
                     * 获取Output protocol type.
Selectable HLS/DASH/HLS_ARCHIVE/DASH_ARCHIVE/HLS_STREAM_PACKAGE/DASH_STREAM_PACKAGE/FRAME_CAPTURE/RTP/RTMP/M2TS.
                     * @return Type Output protocol type.
Selectable HLS/DASH/HLS_ARCHIVE/DASH_ARCHIVE/HLS_STREAM_PACKAGE/DASH_STREAM_PACKAGE/FRAME_CAPTURE/RTP/RTMP/M2TS.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Output protocol type.
Selectable HLS/DASH/HLS_ARCHIVE/DASH_ARCHIVE/HLS_STREAM_PACKAGE/DASH_STREAM_PACKAGE/FRAME_CAPTURE/RTP/RTMP/M2TS.
                     * @param _type Output protocol type.
Selectable HLS/DASH/HLS_ARCHIVE/DASH_ARCHIVE/HLS_STREAM_PACKAGE/DASH_STREAM_PACKAGE/FRAME_CAPTURE/RTP/RTMP/M2TS.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Output information.
RTMP/RTP/FRAME_CAPTURE limit [1,1], HLS/DASH limit [1,10].
                     * @return Outputs Output information.
RTMP/RTP/FRAME_CAPTURE limit [1,1], HLS/DASH limit [1,10].
                     * 
                     */
                    std::vector<OutputInfo> GetOutputs() const;

                    /**
                     * 设置Output information.
RTMP/RTP/FRAME_CAPTURE limit [1,1], HLS/DASH limit [1,10].
                     * @param _outputs Output information.
RTMP/RTP/FRAME_CAPTURE limit [1,1], HLS/DASH limit [1,10].
                     * 
                     */
                    void SetOutputs(const std::vector<OutputInfo>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     * 
                     */
                    bool OutputsHasBeenSet() const;

                    /**
                     * 获取Relay destinations. Quantity: [1, 2]
                     * @return Destinations Relay destinations. Quantity: [1, 2]
                     * 
                     */
                    std::vector<DestinationInfo> GetDestinations() const;

                    /**
                     * 设置Relay destinations. Quantity: [1, 2]
                     * @param _destinations Relay destinations. Quantity: [1, 2]
                     * 
                     */
                    void SetDestinations(const std::vector<DestinationInfo>& _destinations);

                    /**
                     * 判断参数 Destinations 是否已赋值
                     * @return Destinations 是否已赋值
                     * 
                     */
                    bool DestinationsHasBeenSet() const;

                    /**
                     * 获取HLS protocol configuration info, valid only for HLS/HLS_ARCHIVE.
                     * @return HlsRemuxSettings HLS protocol configuration info, valid only for HLS/HLS_ARCHIVE.
                     * 
                     */
                    HlsRemuxSettingsInfo GetHlsRemuxSettings() const;

                    /**
                     * 设置HLS protocol configuration info, valid only for HLS/HLS_ARCHIVE.
                     * @param _hlsRemuxSettings HLS protocol configuration info, valid only for HLS/HLS_ARCHIVE.
                     * 
                     */
                    void SetHlsRemuxSettings(const HlsRemuxSettingsInfo& _hlsRemuxSettings);

                    /**
                     * 判断参数 HlsRemuxSettings 是否已赋值
                     * @return HlsRemuxSettings 是否已赋值
                     * 
                     */
                    bool HlsRemuxSettingsHasBeenSet() const;

                    /**
                     * 获取DRM configuration message.
                     * @return DrmSettings DRM configuration message.
                     * 
                     */
                    DrmSettingsInfo GetDrmSettings() const;

                    /**
                     * 设置DRM configuration message.
                     * @param _drmSettings DRM configuration message.
                     * 
                     */
                    void SetDrmSettings(const DrmSettingsInfo& _drmSettings);

                    /**
                     * 判断参数 DrmSettings 是否已赋值
                     * @return DrmSettings 是否已赋值
                     * 
                     */
                    bool DrmSettingsHasBeenSet() const;

                    /**
                     * 获取DASH protocol configuration info, valid only for DASH/DSAH_ARCHIVE.
                     * @return DashRemuxSettings DASH protocol configuration info, valid only for DASH/DSAH_ARCHIVE.
                     * 
                     */
                    DashRemuxSettingsInfo GetDashRemuxSettings() const;

                    /**
                     * 设置DASH protocol configuration info, valid only for DASH/DSAH_ARCHIVE.
                     * @param _dashRemuxSettings DASH protocol configuration info, valid only for DASH/DSAH_ARCHIVE.
                     * 
                     */
                    void SetDashRemuxSettings(const DashRemuxSettingsInfo& _dashRemuxSettings);

                    /**
                     * 判断参数 DashRemuxSettings 是否已赋值
                     * @return DashRemuxSettings 是否已赋值
                     * 
                     */
                    bool DashRemuxSettingsHasBeenSet() const;

                    /**
                     * 获取Configuration message for media encapsulation. Requires filling in when Type is related to StreamPackage.
                     * @return StreamPackageSettings Configuration message for media encapsulation. Requires filling in when Type is related to StreamPackage.
                     * 
                     */
                    StreamPackageSettingsInfo GetStreamPackageSettings() const;

                    /**
                     * 设置Configuration message for media encapsulation. Requires filling in when Type is related to StreamPackage.
                     * @param _streamPackageSettings Configuration message for media encapsulation. Requires filling in when Type is related to StreamPackage.
                     * 
                     */
                    void SetStreamPackageSettings(const StreamPackageSettingsInfo& _streamPackageSettings);

                    /**
                     * 判断参数 StreamPackageSettings 是否已赋值
                     * @return StreamPackageSettings 是否已赋值
                     * 
                     */
                    bool StreamPackageSettingsHasBeenSet() const;

                    /**
                     * 获取Time shift configuration information.
                     * @return TimeShiftSettings Time shift configuration information.
                     * 
                     */
                    TimeShiftSettingsInfo GetTimeShiftSettings() const;

                    /**
                     * 设置Time shift configuration information.
                     * @param _timeShiftSettings Time shift configuration information.
                     * 
                     */
                    void SetTimeShiftSettings(const TimeShiftSettingsInfo& _timeShiftSettings);

                    /**
                     * 判断参数 TimeShiftSettings 是否已赋值
                     * @return TimeShiftSettings 是否已赋值
                     * 
                     */
                    bool TimeShiftSettingsHasBeenSet() const;

                private:

                    /**
                     * Output group name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the channel level
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Output protocol type.
Selectable HLS/DASH/HLS_ARCHIVE/DASH_ARCHIVE/HLS_STREAM_PACKAGE/DASH_STREAM_PACKAGE/FRAME_CAPTURE/RTP/RTMP/M2TS.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Output information.
RTMP/RTP/FRAME_CAPTURE limit [1,1], HLS/DASH limit [1,10].
                     */
                    std::vector<OutputInfo> m_outputs;
                    bool m_outputsHasBeenSet;

                    /**
                     * Relay destinations. Quantity: [1, 2]
                     */
                    std::vector<DestinationInfo> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * HLS protocol configuration info, valid only for HLS/HLS_ARCHIVE.
                     */
                    HlsRemuxSettingsInfo m_hlsRemuxSettings;
                    bool m_hlsRemuxSettingsHasBeenSet;

                    /**
                     * DRM configuration message.
                     */
                    DrmSettingsInfo m_drmSettings;
                    bool m_drmSettingsHasBeenSet;

                    /**
                     * DASH protocol configuration info, valid only for DASH/DSAH_ARCHIVE.
                     */
                    DashRemuxSettingsInfo m_dashRemuxSettings;
                    bool m_dashRemuxSettingsHasBeenSet;

                    /**
                     * Configuration message for media encapsulation. Requires filling in when Type is related to StreamPackage.
                     */
                    StreamPackageSettingsInfo m_streamPackageSettings;
                    bool m_streamPackageSettingsHasBeenSet;

                    /**
                     * Time shift configuration information.
                     */
                    TimeShiftSettingsInfo m_timeShiftSettings;
                    bool m_timeShiftSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_STREAMLIVEOUTPUTGROUPSINFO_H_
