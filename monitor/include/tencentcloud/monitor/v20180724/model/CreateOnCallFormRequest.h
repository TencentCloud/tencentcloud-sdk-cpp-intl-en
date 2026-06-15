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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEONCALLFORMREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEONCALLFORMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/StaffInfo.h>
#include <tencentcloud/monitor/v20180724/model/CoverStaffInfo.h>
#include <tencentcloud/monitor/v20180724/model/Tag.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * CreateOnCallForm request structure.
                */
                class CreateOnCallFormRequest : public AbstractModel
                {
                public:
                    CreateOnCallFormRequest();
                    ~CreateOnCallFormRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The fixed value is monitor.
                     * @return Module The fixed value is monitor.
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置The fixed value is monitor.
                     * @param _module The fixed value is monitor.
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取On-call schedule name.
                     * @return OnCallFormName On-call schedule name.
                     * 
                     */
                    std::string GetOnCallFormName() const;

                    /**
                     * 设置On-call schedule name.
                     * @param _onCallFormName On-call schedule name.
                     * 
                     */
                    void SetOnCallFormName(const std::string& _onCallFormName);

                    /**
                     * 判断参数 OnCallFormName 是否已赋值
                     * @return OnCallFormName 是否已赋值
                     * 
                     */
                    bool OnCallFormNameHasBeenSet() const;

                    /**
                     * 获取On-call personnel ID group.
                     * @return StaffInfos On-call personnel ID group.
                     * 
                     */
                    std::vector<StaffInfo> GetStaffInfos() const;

                    /**
                     * 设置On-call personnel ID group.
                     * @param _staffInfos On-call personnel ID group.
                     * 
                     */
                    void SetStaffInfos(const std::vector<StaffInfo>& _staffInfos);

                    /**
                     * 判断参数 StaffInfos 是否已赋值
                     * @return StaffInfos 是否已赋值
                     * 
                     */
                    bool StaffInfosHasBeenSet() const;

                    /**
                     * 获取Rotation type.
                     * @return RotationType Rotation type.
                     * 
                     */
                    std::string GetRotationType() const;

                    /**
                     * 设置Rotation type.
                     * @param _rotationType Rotation type.
                     * 
                     */
                    void SetRotationType(const std::string& _rotationType);

                    /**
                     * 判断参数 RotationType 是否已赋值
                     * @return RotationType 是否已赋值
                     * 
                     */
                    bool RotationTypeHasBeenSet() const;

                    /**
                     * 获取Shift change time.
                     * @return ShiftTime Shift change time.
                     * 
                     */
                    std::string GetShiftTime() const;

                    /**
                     * 设置Shift change time.
                     * @param _shiftTime Shift change time.
                     * 
                     */
                    void SetShiftTime(const std::string& _shiftTime);

                    /**
                     * 判断参数 ShiftTime 是否已赋值
                     * @return ShiftTime 是否已赋值
                     * 
                     */
                    bool ShiftTimeHasBeenSet() const;

                    /**
                     * 获取Effect time. Unit: seconds.
                     * @return EffectiveStartTime Effect time. Unit: seconds.
                     * 
                     */
                    int64_t GetEffectiveStartTime() const;

                    /**
                     * 设置Effect time. Unit: seconds.
                     * @param _effectiveStartTime Effect time. Unit: seconds.
                     * 
                     */
                    void SetEffectiveStartTime(const int64_t& _effectiveStartTime);

                    /**
                     * 判断参数 EffectiveStartTime 是否已赋值
                     * @return EffectiveStartTime 是否已赋值
                     * 
                     */
                    bool EffectiveStartTimeHasBeenSet() const;

                    /**
                     * 获取End time of the validity period (in seconds).
                     * @return EffectiveEndTime End time of the validity period (in seconds).
                     * 
                     */
                    int64_t GetEffectiveEndTime() const;

                    /**
                     * 设置End time of the validity period (in seconds).
                     * @param _effectiveEndTime End time of the validity period (in seconds).
                     * 
                     */
                    void SetEffectiveEndTime(const int64_t& _effectiveEndTime);

                    /**
                     * 判断参数 EffectiveEndTime 是否已赋值
                     * @return EffectiveEndTime 是否已赋值
                     * 
                     */
                    bool EffectiveEndTimeHasBeenSet() const;

                    /**
                     * 获取Time zone (-12 to 12).
                     * @return TimeZone Time zone (-12 to 12).
                     * 
                     */
                    double GetTimeZone() const;

                    /**
                     * 设置Time zone (-12 to 12).
                     * @param _timeZone Time zone (-12 to 12).
                     * 
                     */
                    void SetTimeZone(const double& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取Description of the shift schedule.
                     * @return OnCallFormDesc Description of the shift schedule.
                     * 
                     */
                    std::string GetOnCallFormDesc() const;

                    /**
                     * 设置Description of the shift schedule.
                     * @param _onCallFormDesc Description of the shift schedule.
                     * 
                     */
                    void SetOnCallFormDesc(const std::string& _onCallFormDesc);

                    /**
                     * 判断参数 OnCallFormDesc 是否已赋值
                     * @return OnCallFormDesc 是否已赋值
                     * 
                     */
                    bool OnCallFormDescHasBeenSet() const;

                    /**
                     * 获取Shift information.
                     * @return CoverStaffInfos Shift information.
                     * 
                     */
                    std::vector<CoverStaffInfo> GetCoverStaffInfos() const;

                    /**
                     * 设置Shift information.
                     * @param _coverStaffInfos Shift information.
                     * 
                     */
                    void SetCoverStaffInfos(const std::vector<CoverStaffInfo>& _coverStaffInfos);

                    /**
                     * 判断参数 CoverStaffInfos 是否已赋值
                     * @return CoverStaffInfos 是否已赋值
                     * 
                     */
                    bool CoverStaffInfosHasBeenSet() const;

                    /**
                     * 获取Tag bound to the template
                     * @return Tags Tag bound to the template
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag bound to the template
                     * @param _tags Tag bound to the template
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * The fixed value is monitor.
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * On-call schedule name.
                     */
                    std::string m_onCallFormName;
                    bool m_onCallFormNameHasBeenSet;

                    /**
                     * On-call personnel ID group.
                     */
                    std::vector<StaffInfo> m_staffInfos;
                    bool m_staffInfosHasBeenSet;

                    /**
                     * Rotation type.
                     */
                    std::string m_rotationType;
                    bool m_rotationTypeHasBeenSet;

                    /**
                     * Shift change time.
                     */
                    std::string m_shiftTime;
                    bool m_shiftTimeHasBeenSet;

                    /**
                     * Effect time. Unit: seconds.
                     */
                    int64_t m_effectiveStartTime;
                    bool m_effectiveStartTimeHasBeenSet;

                    /**
                     * End time of the validity period (in seconds).
                     */
                    int64_t m_effectiveEndTime;
                    bool m_effectiveEndTimeHasBeenSet;

                    /**
                     * Time zone (-12 to 12).
                     */
                    double m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * Description of the shift schedule.
                     */
                    std::string m_onCallFormDesc;
                    bool m_onCallFormDescHasBeenSet;

                    /**
                     * Shift information.
                     */
                    std::vector<CoverStaffInfo> m_coverStaffInfos;
                    bool m_coverStaffInfosHasBeenSet;

                    /**
                     * Tag bound to the template
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEONCALLFORMREQUEST_H_
