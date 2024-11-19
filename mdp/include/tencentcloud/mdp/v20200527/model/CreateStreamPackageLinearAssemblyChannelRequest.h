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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGELINEARASSEMBLYCHANNELREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGELINEARASSEMBLYCHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/TimeShiftInfo.h>
#include <tencentcloud/mdp/v20200527/model/SlateInfo.h>
#include <tencentcloud/mdp/v20200527/model/OutputReq.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * CreateStreamPackageLinearAssemblyChannel request structure.
                */
                class CreateStreamPackageLinearAssemblyChannelRequest : public AbstractModel
                {
                public:
                    CreateStreamPackageLinearAssemblyChannelRequest();
                    ~CreateStreamPackageLinearAssemblyChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel name.
                     * @return Name Channel name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Channel name.
                     * @param _name Channel name.
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
                     * 获取Define the characteristics of the channel. Standard supports live broadcast and on-demand sources. Basic only supports on-demand source arrangement. Optional values: Standard and Basic.
                     * @return Tier Define the characteristics of the channel. Standard supports live broadcast and on-demand sources. Basic only supports on-demand source arrangement. Optional values: Standard and Basic.
                     * 
                     */
                    std::string GetTier() const;

                    /**
                     * 设置Define the characteristics of the channel. Standard supports live broadcast and on-demand sources. Basic only supports on-demand source arrangement. Optional values: Standard and Basic.
                     * @param _tier Define the characteristics of the channel. Standard supports live broadcast and on-demand sources. Basic only supports on-demand source arrangement. Optional values: Standard and Basic.
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
                     * 获取The source switching modes in the channel are divided into Linear and Loop. Basic only supports Linear, and Standatd supports both.
Optional values: Linear, Standatd.
                     * @return PlaybackMode The source switching modes in the channel are divided into Linear and Loop. Basic only supports Linear, and Standatd supports both.
Optional values: Linear, Standatd.
                     * 
                     */
                    std::string GetPlaybackMode() const;

                    /**
                     * 设置The source switching modes in the channel are divided into Linear and Loop. Basic only supports Linear, and Standatd supports both.
Optional values: Linear, Standatd.
                     * @param _playbackMode The source switching modes in the channel are divided into Linear and Loop. Basic only supports Linear, and Standatd supports both.
Optional values: Linear, Standatd.
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
                     * 获取Time shift enable switch, only valid when Tier is Standard.
                     * @return TimeShiftEnable Time shift enable switch, only valid when Tier is Standard.
                     * 
                     */
                    bool GetTimeShiftEnable() const;

                    /**
                     * 设置Time shift enable switch, only valid when Tier is Standard.
                     * @param _timeShiftEnable Time shift enable switch, only valid when Tier is Standard.
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
                     * 获取Time shift configuration, effective when the time shift switch is turned on.
                     * @return TimeShiftConf Time shift configuration, effective when the time shift switch is turned on.
                     * 
                     */
                    TimeShiftInfo GetTimeShiftConf() const;

                    /**
                     * 设置Time shift configuration, effective when the time shift switch is turned on.
                     * @param _timeShiftConf Time shift configuration, effective when the time shift switch is turned on.
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
                     * 获取Spacer configuration is only valid when PlaybackMode is Linear.
                     * @return SlateConf Spacer configuration is only valid when PlaybackMode is Linear.
                     * 
                     */
                    SlateInfo GetSlateConf() const;

                    /**
                     * 设置Spacer configuration is only valid when PlaybackMode is Linear.
                     * @param _slateConf Spacer configuration is only valid when PlaybackMode is Linear.
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
                     * 获取Output configuration.
                     * @return Outputs Output configuration.
                     * 
                     */
                    std::vector<OutputReq> GetOutputs() const;

                    /**
                     * 设置Output configuration.
                     * @param _outputs Output configuration.
                     * 
                     */
                    void SetOutputs(const std::vector<OutputReq>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     * 
                     */
                    bool OutputsHasBeenSet() const;

                private:

                    /**
                     * Channel name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Define the characteristics of the channel. Standard supports live broadcast and on-demand sources. Basic only supports on-demand source arrangement. Optional values: Standard and Basic.
                     */
                    std::string m_tier;
                    bool m_tierHasBeenSet;

                    /**
                     * The source switching modes in the channel are divided into Linear and Loop. Basic only supports Linear, and Standatd supports both.
Optional values: Linear, Standatd.
                     */
                    std::string m_playbackMode;
                    bool m_playbackModeHasBeenSet;

                    /**
                     * Time shift enable switch, only valid when Tier is Standard.
                     */
                    bool m_timeShiftEnable;
                    bool m_timeShiftEnableHasBeenSet;

                    /**
                     * Time shift configuration, effective when the time shift switch is turned on.
                     */
                    TimeShiftInfo m_timeShiftConf;
                    bool m_timeShiftConfHasBeenSet;

                    /**
                     * Spacer configuration is only valid when PlaybackMode is Linear.
                     */
                    SlateInfo m_slateConf;
                    bool m_slateConfHasBeenSet;

                    /**
                     * Output configuration.
                     */
                    std::vector<OutputReq> m_outputs;
                    bool m_outputsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGELINEARASSEMBLYCHANNELREQUEST_H_
