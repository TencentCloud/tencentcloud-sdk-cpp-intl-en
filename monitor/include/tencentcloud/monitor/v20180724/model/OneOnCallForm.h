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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ONEONCALLFORM_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ONEONCALLFORM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Shift details
                */
                class OneOnCallForm : public AbstractModel
                {
                public:
                    OneOnCallForm();
                    ~OneOnCallForm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Duty ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OnCallFormID Duty ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOnCallFormID() const;

                    /**
                     * 设置Duty ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _onCallFormID Duty ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOnCallFormID(const std::string& _onCallFormID);

                    /**
                     * 判断参数 OnCallFormID 是否已赋值
                     * @return OnCallFormID 是否已赋值
                     * 
                     */
                    bool OnCallFormIDHasBeenSet() const;

                    /**
                     * 获取On-call name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OnCallFormName On-call name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOnCallFormName() const;

                    /**
                     * 设置On-call name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _onCallFormName On-call name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Shift description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OnCallFormDesc Shift description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOnCallFormDesc() const;

                    /**
                     * 设置Shift description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _onCallFormDesc Shift description
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取On-duty personnel
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StaffInfos On-duty personnel
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<StaffInfo> GetStaffInfos() const;

                    /**
                     * 设置On-duty personnel
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _staffInfos On-duty personnel
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Rotation type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RotationType Rotation type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRotationType() const;

                    /**
                     * 设置Rotation type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rotationType Rotation type
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShiftTime Shift change time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetShiftTime() const;

                    /**
                     * 设置Shift change time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _shiftTime Shift change time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Start time of the on-call validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EffectiveStartTime Start time of the on-call validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEffectiveStartTime() const;

                    /**
                     * 设置Start time of the on-call validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _effectiveStartTime Start time of the on-call validity period
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取End time of the on-call validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EffectiveEndTime End time of the on-call validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEffectiveEndTime() const;

                    /**
                     * 设置End time of the on-call validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _effectiveEndTime End time of the on-call validity period
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Time zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeZone Time zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetTimeZone() const;

                    /**
                     * 设置Time zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeZone Time zone
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Shift information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CoverStaffInfos Shift information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CoverStaffInfo> GetCoverStaffInfos() const;

                    /**
                     * 设置Shift information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _coverStaffInfos Shift information.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag bound to the template
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag bound to the template
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag bound to the template
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Duty ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_onCallFormID;
                    bool m_onCallFormIDHasBeenSet;

                    /**
                     * On-call name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_onCallFormName;
                    bool m_onCallFormNameHasBeenSet;

                    /**
                     * Shift description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_onCallFormDesc;
                    bool m_onCallFormDescHasBeenSet;

                    /**
                     * On-duty personnel
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<StaffInfo> m_staffInfos;
                    bool m_staffInfosHasBeenSet;

                    /**
                     * Rotation type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_rotationType;
                    bool m_rotationTypeHasBeenSet;

                    /**
                     * Shift change time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_shiftTime;
                    bool m_shiftTimeHasBeenSet;

                    /**
                     * Start time of the on-call validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_effectiveStartTime;
                    bool m_effectiveStartTimeHasBeenSet;

                    /**
                     * End time of the on-call validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_effectiveEndTime;
                    bool m_effectiveEndTimeHasBeenSet;

                    /**
                     * Time zone
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * Shift information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CoverStaffInfo> m_coverStaffInfos;
                    bool m_coverStaffInfosHasBeenSet;

                    /**
                     * Tag bound to the template
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ONEONCALLFORM_H_
