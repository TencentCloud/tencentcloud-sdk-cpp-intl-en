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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_STAGEINFODETAIL_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_STAGEINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Task step details
                */
                class StageInfoDetail : public AbstractModel
                {
                public:
                    StageInfoDetail();
                    ~StageInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Steps.
                     * @return Stage Steps.
                     * 
                     */
                    std::string GetStage() const;

                    /**
                     * 设置Steps.
                     * @param _stage Steps.
                     * 
                     */
                    void SetStage(const std::string& _stage);

                    /**
                     * 判断参数 Stage 是否已赋值
                     * @return Stage 是否已赋值
                     * 
                     */
                    bool StageHasBeenSet() const;

                    /**
                     * 获取Step name.
                     * @return Name Step name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Step name.
                     * @param _name Step name.
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
                     * 获取Indicates whether to display
                     * @return IsShow Indicates whether to display
                     * 
                     */
                    bool GetIsShow() const;

                    /**
                     * 设置Indicates whether to display
                     * @param _isShow Indicates whether to display
                     * 
                     */
                    void SetIsShow(const bool& _isShow);

                    /**
                     * 判断参数 IsShow 是否已赋值
                     * @return IsShow 是否已赋值
                     * 
                     */
                    bool IsShowHasBeenSet() const;

                    /**
                     * 获取Whether it is a subprocess
                     * @return IsSubFlow Whether it is a subprocess
                     * 
                     */
                    bool GetIsSubFlow() const;

                    /**
                     * 设置Whether it is a subprocess
                     * @param _isSubFlow Whether it is a subprocess
                     * 
                     */
                    void SetIsSubFlow(const bool& _isSubFlow);

                    /**
                     * 判断参数 IsSubFlow 是否已赋值
                     * @return IsSubFlow 是否已赋值
                     * 
                     */
                    bool IsSubFlowHasBeenSet() const;

                    /**
                     * 获取Subprocess tag.
                     * @return SubFlowFlag Subprocess tag.
                     * 
                     */
                    std::string GetSubFlowFlag() const;

                    /**
                     * 设置Subprocess tag.
                     * @param _subFlowFlag Subprocess tag.
                     * 
                     */
                    void SetSubFlowFlag(const std::string& _subFlowFlag);

                    /**
                     * 判断参数 SubFlowFlag 是否已赋值
                     * @return SubFlowFlag 是否已赋值
                     * 
                     */
                    bool SubFlowFlagHasBeenSet() const;

                    /**
                     * 获取Step execution status. 0: not started, 1: in progress, 2: completed, 3: partially completed, -1: failed
                     * @return Status Step execution status. 0: not started, 1: in progress, 2: completed, 3: partially completed, -1: failed
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Step execution status. 0: not started, 1: in progress, 2: completed, 3: partially completed, -1: failed
                     * @param _status Step execution status. 0: not started, 1: in progress, 2: completed, 3: partially completed, -1: failed
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Step running status description.
                     * @return Desc Step running status description.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Step running status description.
                     * @param _desc Step running status description.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Running progress.
                     * @return Progress Running progress.
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置Running progress.
                     * @param _progress Running progress.
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Starttime Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStarttime() const;

                    /**
                     * 设置Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _starttime Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStarttime(const std::string& _starttime);

                    /**
                     * 判断参数 Starttime 是否已赋值
                     * @return Starttime 是否已赋值
                     * 
                     */
                    bool StarttimeHasBeenSet() const;

                    /**
                     * 获取End time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Endtime End time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndtime() const;

                    /**
                     * 设置End time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endtime End time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndtime(const std::string& _endtime);

                    /**
                     * 判断参数 Endtime 是否已赋值
                     * @return Endtime 是否已赋值
                     * 
                     */
                    bool EndtimeHasBeenSet() const;

                    /**
                     * 获取Whether details are included.
                     * @return HadWoodDetail Whether details are included.
                     * 
                     */
                    bool GetHadWoodDetail() const;

                    /**
                     * 设置Whether details are included.
                     * @param _hadWoodDetail Whether details are included.
                     * 
                     */
                    void SetHadWoodDetail(const bool& _hadWoodDetail);

                    /**
                     * 判断参数 HadWoodDetail 是否已赋值
                     * @return HadWoodDetail 是否已赋值
                     * 
                     */
                    bool HadWoodDetailHasBeenSet() const;

                    /**
                     * 获取Wood subprocess ID.
                     * @return WoodJobId Wood subprocess ID.
                     * 
                     */
                    uint64_t GetWoodJobId() const;

                    /**
                     * 设置Wood subprocess ID.
                     * @param _woodJobId Wood subprocess ID.
                     * 
                     */
                    void SetWoodJobId(const uint64_t& _woodJobId);

                    /**
                     * 判断参数 WoodJobId 是否已赋值
                     * @return WoodJobId 是否已赋值
                     * 
                     */
                    bool WoodJobIdHasBeenSet() const;

                    /**
                     * 获取Multi-language version key.
                     * @return LanguageKey Multi-language version key.
                     * 
                     */
                    std::string GetLanguageKey() const;

                    /**
                     * 设置Multi-language version key.
                     * @param _languageKey Multi-language version key.
                     * 
                     */
                    void SetLanguageKey(const std::string& _languageKey);

                    /**
                     * 判断参数 LanguageKey 是否已赋值
                     * @return LanguageKey 是否已赋值
                     * 
                     */
                    bool LanguageKeyHasBeenSet() const;

                    /**
                     * 获取Reason for stage failure.
                     * @return FailedReason Reason for stage failure.
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 设置Reason for stage failure.
                     * @param _failedReason Reason for stage failure.
                     * 
                     */
                    void SetFailedReason(const std::string& _failedReason);

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     * 
                     */
                    bool FailedReasonHasBeenSet() const;

                    /**
                     * 获取Step duration.
                     * @return TimeConsuming Step duration.
                     * 
                     */
                    std::string GetTimeConsuming() const;

                    /**
                     * 设置Step duration.
                     * @param _timeConsuming Step duration.
                     * 
                     */
                    void SetTimeConsuming(const std::string& _timeConsuming);

                    /**
                     * 判断参数 TimeConsuming 是否已赋值
                     * @return TimeConsuming 是否已赋值
                     * 
                     */
                    bool TimeConsumingHasBeenSet() const;

                    /**
                     * 获取
                     * @return Id 
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置
                     * @param _id 
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Steps.
                     */
                    std::string m_stage;
                    bool m_stageHasBeenSet;

                    /**
                     * Step name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Indicates whether to display
                     */
                    bool m_isShow;
                    bool m_isShowHasBeenSet;

                    /**
                     * Whether it is a subprocess
                     */
                    bool m_isSubFlow;
                    bool m_isSubFlowHasBeenSet;

                    /**
                     * Subprocess tag.
                     */
                    std::string m_subFlowFlag;
                    bool m_subFlowFlagHasBeenSet;

                    /**
                     * Step execution status. 0: not started, 1: in progress, 2: completed, 3: partially completed, -1: failed
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Step running status description.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Running progress.
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_starttime;
                    bool m_starttimeHasBeenSet;

                    /**
                     * End time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endtime;
                    bool m_endtimeHasBeenSet;

                    /**
                     * Whether details are included.
                     */
                    bool m_hadWoodDetail;
                    bool m_hadWoodDetailHasBeenSet;

                    /**
                     * Wood subprocess ID.
                     */
                    uint64_t m_woodJobId;
                    bool m_woodJobIdHasBeenSet;

                    /**
                     * Multi-language version key.
                     */
                    std::string m_languageKey;
                    bool m_languageKeyHasBeenSet;

                    /**
                     * Reason for stage failure.
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                    /**
                     * Step duration.
                     */
                    std::string m_timeConsuming;
                    bool m_timeConsumingHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_STAGEINFODETAIL_H_
