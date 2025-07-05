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
                     * 获取Output protocol
Valid values: `HLS`, `DASH`, `HLS_ARCHIVE`, 
 `DASH_ARCHIVE`, `HLS_STREAM_PACKAGE`, 
 `DASH_STREAM_PACKAGE`, 
 `FRAME_CAPTURE`, `RTP`, `RTMP`, `M2TS`.
                     * @return Type Output protocol
Valid values: `HLS`, `DASH`, `HLS_ARCHIVE`, 
 `DASH_ARCHIVE`, `HLS_STREAM_PACKAGE`, 
 `DASH_STREAM_PACKAGE`, 
 `FRAME_CAPTURE`, `RTP`, `RTMP`, `M2TS`.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Output protocol
Valid values: `HLS`, `DASH`, `HLS_ARCHIVE`, 
 `DASH_ARCHIVE`, `HLS_STREAM_PACKAGE`, 
 `DASH_STREAM_PACKAGE`, 
 `FRAME_CAPTURE`, `RTP`, `RTMP`, `M2TS`.
                     * @param _type Output protocol
Valid values: `HLS`, `DASH`, `HLS_ARCHIVE`, 
 `DASH_ARCHIVE`, `HLS_STREAM_PACKAGE`, 
 `DASH_STREAM_PACKAGE`, 
 `FRAME_CAPTURE`, `RTP`, `RTMP`, `M2TS`.
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
                     * 获取Output information
If the type is RTMP, RTP or FRAME_CAPTURE, only one output is allowed; if it is HLS or DASH, 1-10 outputs are allowed.
                     * @return Outputs Output information
If the type is RTMP, RTP or FRAME_CAPTURE, only one output is allowed; if it is HLS or DASH, 1-10 outputs are allowed.
                     * 
                     */
                    std::vector<OutputInfo> GetOutputs() const;

                    /**
                     * 设置Output information
If the type is RTMP, RTP or FRAME_CAPTURE, only one output is allowed; if it is HLS or DASH, 1-10 outputs are allowed.
                     * @param _outputs Output information
If the type is RTMP, RTP or FRAME_CAPTURE, only one output is allowed; if it is HLS or DASH, 1-10 outputs are allowed.
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
                     * 获取HLS protocol configuration information, which takes effect only for HLS/HLS_ARCHIVE/HLS_STREAM_PACKAGE outputs.
Note: this field may return `null`, indicating that no valid value was found.
                     * @return HlsRemuxSettings HLS protocol configuration information, which takes effect only for HLS/HLS_ARCHIVE/HLS_STREAM_PACKAGE outputs.
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    HlsRemuxSettingsInfo GetHlsRemuxSettings() const;

                    /**
                     * 设置HLS protocol configuration information, which takes effect only for HLS/HLS_ARCHIVE/HLS_STREAM_PACKAGE outputs.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _hlsRemuxSettings HLS protocol configuration information, which takes effect only for HLS/HLS_ARCHIVE/HLS_STREAM_PACKAGE outputs.
Note: this field may return `null`, indicating that no valid value was found.
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
                     * 获取DRM configuration information
Note: this field may return `null`, indicating that no valid value was found.
                     * @return DrmSettings DRM configuration information
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    DrmSettingsInfo GetDrmSettings() const;

                    /**
                     * 设置DRM configuration information
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _drmSettings DRM configuration information
Note: this field may return `null`, indicating that no valid value was found.
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
                     * 获取DASH protocol configuration information, which takes effect only for DASH/DASH_ARCHIVE outputs
Note: this field may return `null`, indicating that no valid value was found.
                     * @return DashRemuxSettings DASH protocol configuration information, which takes effect only for DASH/DASH_ARCHIVE outputs
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    DashRemuxSettingsInfo GetDashRemuxSettings() const;

                    /**
                     * 设置DASH protocol configuration information, which takes effect only for DASH/DASH_ARCHIVE outputs
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _dashRemuxSettings DASH protocol configuration information, which takes effect only for DASH/DASH_ARCHIVE outputs
Note: this field may return `null`, indicating that no valid value was found.
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
                     * 获取StreamPackage configuration information, which is required if the output type is StreamPackage
Note: this field may return `null`, indicating that no valid value was found.
                     * @return StreamPackageSettings StreamPackage configuration information, which is required if the output type is StreamPackage
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    StreamPackageSettingsInfo GetStreamPackageSettings() const;

                    /**
                     * 设置StreamPackage configuration information, which is required if the output type is StreamPackage
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _streamPackageSettings StreamPackage configuration information, which is required if the output type is StreamPackage
Note: this field may return `null`, indicating that no valid value was found.
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
                     * 获取Time-shift configuration information
Note: This field may return `null`, indicating that no valid value was found.
                     * @return TimeShiftSettings Time-shift configuration information
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    TimeShiftSettingsInfo GetTimeShiftSettings() const;

                    /**
                     * 设置Time-shift configuration information
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _timeShiftSettings Time-shift configuration information
Note: This field may return `null`, indicating that no valid value was found.
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
                     * Output protocol
Valid values: `HLS`, `DASH`, `HLS_ARCHIVE`, 
 `DASH_ARCHIVE`, `HLS_STREAM_PACKAGE`, 
 `DASH_STREAM_PACKAGE`, 
 `FRAME_CAPTURE`, `RTP`, `RTMP`, `M2TS`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Output information
If the type is RTMP, RTP or FRAME_CAPTURE, only one output is allowed; if it is HLS or DASH, 1-10 outputs are allowed.
                     */
                    std::vector<OutputInfo> m_outputs;
                    bool m_outputsHasBeenSet;

                    /**
                     * Relay destinations. Quantity: [1, 2]
                     */
                    std::vector<DestinationInfo> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * HLS protocol configuration information, which takes effect only for HLS/HLS_ARCHIVE/HLS_STREAM_PACKAGE outputs.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    HlsRemuxSettingsInfo m_hlsRemuxSettings;
                    bool m_hlsRemuxSettingsHasBeenSet;

                    /**
                     * DRM configuration information
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    DrmSettingsInfo m_drmSettings;
                    bool m_drmSettingsHasBeenSet;

                    /**
                     * DASH protocol configuration information, which takes effect only for DASH/DASH_ARCHIVE outputs
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    DashRemuxSettingsInfo m_dashRemuxSettings;
                    bool m_dashRemuxSettingsHasBeenSet;

                    /**
                     * StreamPackage configuration information, which is required if the output type is StreamPackage
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    StreamPackageSettingsInfo m_streamPackageSettings;
                    bool m_streamPackageSettingsHasBeenSet;

                    /**
                     * Time-shift configuration information
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    TimeShiftSettingsInfo m_timeShiftSettings;
                    bool m_timeShiftSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_STREAMLIVEOUTPUTGROUPSINFO_H_
