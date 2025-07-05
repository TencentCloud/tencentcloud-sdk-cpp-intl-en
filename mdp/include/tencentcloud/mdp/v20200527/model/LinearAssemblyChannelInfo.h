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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_LINEARASSEMBLYCHANNELINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_LINEARASSEMBLYCHANNELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/TimeShiftInfo.h>
#include <tencentcloud/mdp/v20200527/model/SlateInfo.h>
#include <tencentcloud/mdp/v20200527/model/OutputInfo.h>
#include <tencentcloud/mdp/v20200527/model/ProgramScheduleInfo.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * Linearly assembled channel information.
                */
                class LinearAssemblyChannelInfo : public AbstractModel
                {
                public:
                    LinearAssemblyChannelInfo();
                    ~LinearAssemblyChannelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Linear assembly channel name.
                     * @return Name Linear assembly channel name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Linear assembly channel name.
                     * @param _name Linear assembly channel name.
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
                     * 获取Define the characteristics of the channel. Standard supports live broadcast and on-demand sources, while Basic only supports on-demand source arrangement.
                     * @return Tier Define the characteristics of the channel. Standard supports live broadcast and on-demand sources, while Basic only supports on-demand source arrangement.
                     * 
                     */
                    std::string GetTier() const;

                    /**
                     * 设置Define the characteristics of the channel. Standard supports live broadcast and on-demand sources, while Basic only supports on-demand source arrangement.
                     * @param _tier Define the characteristics of the channel. Standard supports live broadcast and on-demand sources, while Basic only supports on-demand source arrangement.
                     * 
                     */
                    void SetTier(const std::string& _tier);

                    /**
                     * 判断参数 Tier 是否已赋值
                     * @return Tier 是否已赋值
                     * 
                     */
                    bool TierHasBeenSet() const;

                    /**
                     * 获取The source switching mode in the channel is divided into Linear and Loop. Live broadcast only supports Linear.
                     * @return PlaybackMode The source switching mode in the channel is divided into Linear and Loop. Live broadcast only supports Linear.
                     * 
                     */
                    std::string GetPlaybackMode() const;

                    /**
                     * 设置The source switching mode in the channel is divided into Linear and Loop. Live broadcast only supports Linear.
                     * @param _playbackMode The source switching mode in the channel is divided into Linear and Loop. Live broadcast only supports Linear.
                     * 
                     */
                    void SetPlaybackMode(const std::string& _playbackMode);

                    /**
                     * 判断参数 PlaybackMode 是否已赋值
                     * @return PlaybackMode 是否已赋值
                     * 
                     */
                    bool PlaybackModeHasBeenSet() const;

                    /**
                     * 获取Time shift configuration, vod is valid.
                     * @return TimeShiftConf Time shift configuration, vod is valid.
                     * 
                     */
                    TimeShiftInfo GetTimeShiftConf() const;

                    /**
                     * 设置Time shift configuration, vod is valid.
                     * @param _timeShiftConf Time shift configuration, vod is valid.
                     * 
                     */
                    void SetTimeShiftConf(const TimeShiftInfo& _timeShiftConf);

                    /**
                     * 判断参数 TimeShiftConf 是否已赋值
                     * @return TimeShiftConf 是否已赋值
                     * 
                     */
                    bool TimeShiftConfHasBeenSet() const;

                    /**
                     * 获取Spacer configuration.
                     * @return SlateConf Spacer configuration.
                     * 
                     */
                    SlateInfo GetSlateConf() const;

                    /**
                     * 设置Spacer configuration.
                     * @param _slateConf Spacer configuration.
                     * 
                     */
                    void SetSlateConf(const SlateInfo& _slateConf);

                    /**
                     * 判断参数 SlateConf 是否已赋值
                     * @return SlateConf 是否已赋值
                     * 
                     */
                    bool SlateConfHasBeenSet() const;

                    /**
                     * 获取output information.
                     * @return Outputs output information.
                     * 
                     */
                    std::vector<OutputInfo> GetOutputs() const;

                    /**
                     * 设置output information.
                     * @param _outputs output information.
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
                     * 获取List of programs bound to this channel.
                     * @return AttachedPrograms List of programs bound to this channel.
                     * 
                     */
                    std::vector<std::string> GetAttachedPrograms() const;

                    /**
                     * 设置List of programs bound to this channel.
                     * @param _attachedPrograms List of programs bound to this channel.
                     * 
                     */
                    void SetAttachedPrograms(const std::vector<std::string>& _attachedPrograms);

                    /**
                     * 判断参数 AttachedPrograms 是否已赋值
                     * @return AttachedPrograms 是否已赋值
                     * 
                     */
                    bool AttachedProgramsHasBeenSet() const;

                    /**
                     * 获取program information.
                     * @return ProgramSchedules program information.
                     * 
                     */
                    std::vector<ProgramScheduleInfo> GetProgramSchedules() const;

                    /**
                     * 设置program information.
                     * @param _programSchedules program information.
                     * 
                     */
                    void SetProgramSchedules(const std::vector<ProgramScheduleInfo>& _programSchedules);

                    /**
                     * 判断参数 ProgramSchedules 是否已赋值
                     * @return ProgramSchedules 是否已赋值
                     * 
                     */
                    bool ProgramSchedulesHasBeenSet() const;

                    /**
                     * 获取ID.
                     * @return Id ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID.
                     * @param _id ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
                     * @param _region Region.
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
                     * 获取State.
                     * @return State State.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置State.
                     * @param _state State.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Time shift on switch.
                     * @return TimeShiftEnable Time shift on switch.
                     * 
                     */
                    bool GetTimeShiftEnable() const;

                    /**
                     * 设置Time shift on switch.
                     * @param _timeShiftEnable Time shift on switch.
                     * 
                     */
                    void SetTimeShiftEnable(const bool& _timeShiftEnable);

                    /**
                     * 判断参数 TimeShiftEnable 是否已赋值
                     * @return TimeShiftEnable 是否已赋值
                     * 
                     */
                    bool TimeShiftEnableHasBeenSet() const;

                    /**
                     * 获取Channel creation time, unix seconds timestamp.
                     * @return CreateTime Channel creation time, unix seconds timestamp.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Channel creation time, unix seconds timestamp.
                     * @param _createTime Channel creation time, unix seconds timestamp.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Linear assembly channel name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Define the characteristics of the channel. Standard supports live broadcast and on-demand sources, while Basic only supports on-demand source arrangement.
                     */
                    std::string m_tier;
                    bool m_tierHasBeenSet;

                    /**
                     * The source switching mode in the channel is divided into Linear and Loop. Live broadcast only supports Linear.
                     */
                    std::string m_playbackMode;
                    bool m_playbackModeHasBeenSet;

                    /**
                     * Time shift configuration, vod is valid.
                     */
                    TimeShiftInfo m_timeShiftConf;
                    bool m_timeShiftConfHasBeenSet;

                    /**
                     * Spacer configuration.
                     */
                    SlateInfo m_slateConf;
                    bool m_slateConfHasBeenSet;

                    /**
                     * output information.
                     */
                    std::vector<OutputInfo> m_outputs;
                    bool m_outputsHasBeenSet;

                    /**
                     * List of programs bound to this channel.
                     */
                    std::vector<std::string> m_attachedPrograms;
                    bool m_attachedProgramsHasBeenSet;

                    /**
                     * program information.
                     */
                    std::vector<ProgramScheduleInfo> m_programSchedules;
                    bool m_programSchedulesHasBeenSet;

                    /**
                     * ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * State.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Time shift on switch.
                     */
                    bool m_timeShiftEnable;
                    bool m_timeShiftEnableHasBeenSet;

                    /**
                     * Channel creation time, unix seconds timestamp.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_LINEARASSEMBLYCHANNELINFO_H_
